#include "..\include\abstractfactory.h"

//This function of concrte factory 1 will return the object of Tea and Chocalota
Drink* ConcreteVENDINGMACHINE1::CreateDrink(int d)
{
    if(d == 1){
        return new Tea();
    }
    else{
        return new Chocolate();;
    }
}

//This function of concrete factory 1 will return the object of sugar
Additive* ConcreteVENDINGMACHINE1::CreateAdditive(int a)
{
    if(a == 1)
        return new Sugar();
}

//This function of concrte factory 2 will return the object of coffee
Drink* ConcreteVENDINGMACHINE2::CreateDrink(int d)
{
    return new Coffee();
}

//This function of concrte factory 2 will return the object of sugar and cream
Additive* ConcreteVENDINGMACHINE2::CreateAdditive(int a)
{
    if(a == 0){
        return new Sugar();
    }
    else{
        return new Cream();
    }
}
