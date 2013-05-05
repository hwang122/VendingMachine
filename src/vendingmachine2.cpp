#include "..\include\vendingmachine2.h"

//vending machine's construction
VENDINGMACHINE2::VENDINGMACHINE2()
{
    DS = new DataStore2();
    OP *op = new OP(DS, 2);
    m = new MDAEFSM(op);
}

//vending machine's destruction
VENDINGMACHINE2::~VENDINGMACHINE2()
{
    delete DS;
    delete m;
}

//it will store the price in temp data store and call the create in MDA
void VENDINGMACHINE2::CREATE(float p)
{
    DS->SetVM2TempPrice(p);
    m->create();
}

//it will store the fund in temp data store
//if fund is sufficient, it will call coin(1), else it will call coin(0)
void VENDINGMACHINE2::COIN(float v)
{
    DS->SetVM2TempCF(v);
    if(DS->GetVM2CF() + v >= DS->GetVM2Price())
        m->coin(1);
    else
        m->coin(0);
}

// it will call insert_cups in MDA
void VENDINGMACHINE2::InsertCups(int n)
{
    m->insert_cups(n);
}

//it will call additive(1) in MDA
void VENDINGMACHINE2::SUGAR()
{
    m->additive(1);
}

//it will call additive(2) in MDA
void VENDINGMACHINE2::CREAM()
{
    m->additive(2);
}

// it will call dispose_drink(3) in MDA
void VENDINGMACHINE2::COFFEE()
{
    m->dispose_drink(3);
}

//it will store price in temp data store and call set_price in MDA
void VENDINGMACHINE2::SetPrice(float p)
{
    DS->SetVM2TempPrice(p);
    m->set_price();
}

//it will call cancel in MDA
void VENDINGMACHINE2::CANCEL()
{
    m->cancel();
}
