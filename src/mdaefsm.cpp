#include "..\include\mdaefsm.h"

//This is the construction of MDAEFSM, it will initialize the private data
MDAEFSM::MDAEFSM(OP *op)
{
    START = new start(this, op);
    NOCUPS = new no_cups(this, op);
    IDLE = new idle(this, op);
    COININSERT = new coin_inserted(this, op);
    p = START;

    A = new int[2];
    for(int i = 0; i < 2; i++)
        A[i] = 0;
    k = 0;
}

//This is the destruction of MDAEFSM
MDAEFSM::~MDAEFSM()
{
    //delete []LS;
    delete START;
    delete NOCUPS;
    delete IDLE;
    delete COININSERT;
    delete []A;
}

//it will call the create events in state
void MDAEFSM::create()
{
    p->create();
}

//it will call the insert_cups event in state
void MDAEFSM::insert_cups(int n)
{
    if(n > 0)
        p->insert_cups(n);
}

//it will call the coin event in state
void MDAEFSM::coin(int f)
{
    p->coin(f);
}

//it will call the cancel event in state
void MDAEFSM::cancel()
{
    p->cancel();
}

//it will call the set_price event in state
void MDAEFSM::set_price()
{
    p->set_price();
}

//it will call the dispose_drink event in state
void MDAEFSM::dispose_drink(int d)
{
    p->dispose_drink(d);
}

//it will call the additive event in state
void MDAEFSM::additive(int a)
{
    p->additive(a);
}

//this funtion is used to change the state
void MDAEFSM::changeState(int i)
{
    switch(i){
        case 0:
            p = START;
            break;
        case 1:
            p = NOCUPS;
            break;
        case 2:
            p = IDLE;
            break;
        case 3:
            p = COININSERT;
            break;
        default:
            break;
    }
}

//set and get for private data in MDA
int* MDAEFSM::GetA()
{
    return A;
}

void MDAEFSM::SetA(int a)
{
    if(A[a] == 0)
        A[a] = 1;
    else
        A[a] = 0;
}

int MDAEFSM::GetK()
{
    return k;
}

void MDAEFSM::SetK(int n)
{
    k = n;
}

