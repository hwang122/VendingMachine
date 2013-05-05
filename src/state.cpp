#include "..\include\state.h"
#include "..\include\mdaefsm.h"

//start's construction
start::start(MDAEFSM *pMDA, OP *op)
{
    m = pMDA;
    this->op = op;
}

//in state start, create is realized
//it will store the price and change state to no_cups
void start::create()
{
    op->StorePrice();
    m->changeState(1);
}

//no_cups's construction
no_cups::no_cups(MDAEFSM *pMDA, OP *op)
{
    m = pMDA;
    this->op = op;
}

//in no_cups's state, insert_cup will set number of
//cups to n, and zero the CF, change state to idle
void no_cups::insert_cups(int n)
{
    m->SetK(n);
    m->changeState(2);
    op->ZeroCF();
}

//in no_cups, insert coin will return coin
void no_cups::coin(int f)
{
    op->ReturnCoins();
}

//idle's construction
idle::idle(MDAEFSM *pMDA, OP *op)
{
    m = pMDA;
    this->op = op;
}

//in idle, insert cups will increase the number of cups
void idle::insert_cups(int n)
{
    int k = m->GetK();
    m->SetK(k + n);
}

//in idle, if fund is sufficient, it will increase CF, zero additive list
//and change state to coin_inserted, else it will just increase the CF
void idle::coin(int f)
{
    int *A = m->GetA();
    if(f == 0)
        op->increaseCF();
    else{
        op->increaseCF();
        for(int i = 0; i < 2; i++)
            if(A[i] == 1)
                m->SetA(i);
        m->changeState(3);
    }
}

//in idle, set_price will change the price of drink
void idle::set_price()
{
    op->StorePrice();
}

//coin_inserted's construction
coin_inserted::coin_inserted(MDAEFSM *pMDA, OP *op)
{
    m = pMDA;
    this->op = op;
}

//in coin_inserted, insert coin will return the coin
void coin_inserted::coin(int f)
{
    op->ReturnCoins();
}

//in coin_inserted, cancel will return coin, zero the CF and change state to idle
void coin_inserted::cancel()
{
    op->ReturnCoins();
    op->ZeroCF();
    m->changeState(2);
}

//in coin_inserted, dispose drink will dispose drink and additive
//if number of cups is bigger than 1, it will zero CF, minues number
//of cups by one and change state to idle
//else it will change state to no_cups
void coin_inserted::dispose_drink(int d)
{
    int k = m->GetK();
    if(k > 1){
        op->DisposeDrink(d);
        op->DisposeAdditive(m->GetA());
        op->ZeroCF();
        k = k - 1;
        m->SetK(k);
        m->changeState(2);
    }
    else{
        op->DisposeDrink(d);
        op->DisposeAdditive(m->GetA());
        m->changeState(1);
    }
}

//in coin_inserted, additive will change the additive list
void coin_inserted::additive(int a)
{
    m->SetA(a);
}
