#include "..\include\datastore.h"
#include "..\include\drink.h"
#include "..\include\additive.h"
#include "..\include\abstractfactory.h"

#ifndef OP_H
#define OP_H

//this class is the output processor
//the function are actions
class OP
{
    public:
        OP(DataStore *DS, int vm);
        virtual ~OP(){};

        //output processor actions
        void StorePrice();
        void ZeroCF();
        void increaseCF();
        void ReturnCoins();
        void DisposeDrink(int d);
        void DisposeAdditive(int A[]);

    private:
        DataStore *DS;
        Drink *drink;
        Additive *additive;
        abstractfactory *factory;
        int vm;
};

#endif // OP_H
