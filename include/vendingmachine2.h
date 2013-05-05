#include "..\include\mdaefsm.h"
#include "..\include\datastore.h"
#include "..\include\state.h"

#ifndef VENDINGMACHINE2_H
#define VENDINGMACHINE2_H

//This class is the interface of vending machine 2
class VENDINGMACHINE2
{
    public:
        VENDINGMACHINE2();
        virtual ~VENDINGMACHINE2();

        //These functions are events of vending machine 2
        void CREATE(float p);
        void COIN(float v);
        void SUGAR();
        void CREAM();
        void COFFEE();
        void InsertCups(int n);
        void SetPrice(float p);
        void CANCEL();

    protected:
    private:
        MDAEFSM *m;
        DataStore *DS;
};

#endif // VENDINGMACHINE2_H
