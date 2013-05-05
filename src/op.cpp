#include "..\include\op.h"

#include <iostream>
using namespace std;

//op's construction, initialize the data
OP::OP(DataStore *DS, int vm)
{
    this->DS = DS;
    this->vm = vm;

    if(vm == 1){
        factory = new ConcreteVENDINGMACHINE1();
    }
    else{
        factory = new ConcreteVENDINGMACHINE2();
    }
}

//change the price in data store
void OP::StorePrice()
{
    if(vm == 1){
        int tempPrice;
        tempPrice = DS->GetVM1TempPrice();
        DS->SetVM1Price(tempPrice);
    }
    else{
        float tempPrice;
        tempPrice = DS->GetVM2TempPrice();
        DS->SetVM2Price(tempPrice);
    }
}

//make the cf become 0
void OP::ZeroCF()
{
    if(vm == 1)
        DS->SetVM1CF(0);
    else
        DS->SetVM2CF(0);
}

//increase the cf in data store
void OP::increaseCF()
{
    if(vm == 1){
        int tempCF, CF;
        tempCF = DS->GetVM1TempCF();
        CF = DS->GetVM1CF();
        DS->SetVM1CF(tempCF + CF);
    }
    else{
        float tempCF, CF;
        tempCF = DS->GetVM2TempCF();
        CF = DS->GetVM2CF();
        DS->SetVM2CF(tempCF + CF);
    }
}

//return coins
void OP::ReturnCoins()
{
    if(vm == 1){
        int CF;
        CF = DS->GetVM1CF();
        cout<< "Return " << CF <<" coin."<<endl;
    }
    else{
        float CF;
        CF = DS->GetVM2CF();
        cout<< "Return " << CF <<" coin."<<endl;
    }
}

//dispose cup of drink, using abstract factory
void OP::DisposeDrink(int d)
{
    drink = factory->CreateDrink(d);
    drink->DisposeDrink();
    delete drink;
}

//dispose additive, using abstract factory
void OP::DisposeAdditive(int A[])
{
    for(int i = 0; i < 2; i++){
        if(A[i] == 1){
            additive = factory->CreateAdditive(i);
            additive->DisposeAdditive();
            delete additive;
        }
    }
}
