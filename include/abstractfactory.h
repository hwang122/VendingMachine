#include "..\include\drink.h"
#include "..\include\additive.h"

#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

//Abstract Factory
class abstractfactory
{
    public:
        abstractfactory(){};
        virtual ~abstractfactory(){};

        //abstract class of returning a drink object
        virtual Drink* CreateDrink(int d) = 0;
        //abstract class of returning an additive object
        virtual Additive* CreateAdditive(int a) = 0;
};

//Concrete Factory of Vending Machine 1
class ConcreteVENDINGMACHINE1 : public abstractfactory
{
    public:
        ConcreteVENDINGMACHINE1(){};
        virtual ~ConcreteVENDINGMACHINE1(){};

        //return a drink object
        virtual Drink* CreateDrink(int d);
        //return an additive object
        virtual Additive* CreateAdditive(int a);
};

//Concrete Factory of Vending Machine 2
class ConcreteVENDINGMACHINE2 : public abstractfactory
{
    public:
        ConcreteVENDINGMACHINE2(){};
        virtual ~ConcreteVENDINGMACHINE2(){};

        //return a drink object
        virtual Drink* CreateDrink(int d);
        //return an additive object
        virtual Additive* CreateAdditive(int a);
};

#endif // ABSTRACTFACTORY_H
