#include "..\include\datastore.h"


int DataStore1::GetVM1TempPrice()
{
    return tempPrice;
}

void DataStore1::SetVM1TempPrice(int price)
{
    tempPrice = price;
}

int DataStore1::GetVM1TempCF()
{
    return tempCF;
}

void DataStore1::SetVM1TempCF(int cf)
{
    tempCF = cf;
}

int DataStore1::GetVM1Price()
{
    return price;
}

void DataStore1::SetVM1Price(int price)
{
    this->price = price;
}

int DataStore1::GetVM1CF()
{
    return cf;
}

void DataStore1::SetVM1CF(int cf)
{
    this->cf = cf;
}

float DataStore2::GetVM2TempPrice()
{
    return tempPrice;
}

void DataStore2::SetVM2TempPrice(float price)
{
    tempPrice = price;
}

float DataStore2::GetVM2TempCF()
{
    return tempCF;
}

void DataStore2::SetVM2TempCF(float cf)
{
    tempCF = cf;
}

float DataStore2::GetVM2Price()
{
    return price;
}

void DataStore2::SetVM2Price(float price)
{
    this->price = price;
}

float DataStore2::GetVM2CF()
{
    return cf;
}

void DataStore2::SetVM2CF(float cf)
{
    this->cf = cf;
}

