#include "..\include\vendingmachine1.h"

//vending machine's construction
VENDINGMACHINE1::VENDINGMACHINE1()
{
    DS = new DataStore1();
    OP *op = new OP(DS, 1);
    m = new MDAEFSM(op);
}

//vending machine's destruction
VENDINGMACHINE1::~VENDINGMACHINE1()
{
    delete DS;
    delete m;
}

//it will store the price in temp data store and call the create in MDA
void VENDINGMACHINE1::create(int p)
{
    DS->SetVM1TempPrice(p);
    m->create();
}

//it will store the fund in temp data store
//if fund is sufficient, it will call coin(1), else it will call coin(0)
void VENDINGMACHINE1::coin(int v)
{
    DS->SetVM1TempCF(v);
    if(DS->GetVM1CF() + v >= DS->GetVM1Price())
        m->coin(1);
    else
        m->coin(0);
}

// it will call insert_cups in MDA
void VENDINGMACHINE1::insert_cups(int n)
{
    m->insert_cups(n);
}

//it will call additive(1) in MDA
void VENDINGMACHINE1::sugar()
{
    m->additive(1);
}

// it will call dispose_drink(1) in MDA
void VENDINGMACHINE1::tea()
{
    m->dispose_drink(1);
}

//it will call dispose_drink(2) in MDA
void VENDINGMACHINE1::chocolate()
{
    m->dispose_drink(2);
}

//it will store price in temp data store and call set_price in MDA
void VENDINGMACHINE1::set_price(int p)
{
    DS->SetVM1TempPrice(p);
    m->set_price();
}

//it will call cancel in MDA
void VENDINGMACHINE1::cancel()
{
    m->cancel();
}
