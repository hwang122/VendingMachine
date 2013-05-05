#include <iostream>
#include "..\include\drink.h"

using namespace std;

//this is the action of dispose tea
void Tea::DisposeDrink()
{
    cout<<" A cup of Tea is disposed."<<endl;
}

//this is the action of dipose chocolate
void Chocolate::DisposeDrink()
{
    cout<<" A cup of Chocolate is disposed."<<endl;
}

//this is the action of dispose coffee
void Coffee::DisposeDrink()
{
    cout<<" A cup of Coffee is disposed."<<endl;
}
