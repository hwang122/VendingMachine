#include "..\include\mdaefsm.h"
#include "..\include\datastore.h"
#include "..\include\state.h"

#ifndef VENDINGMACHINE1_H
#define VENDINGMACHINE1_H

//This class is the interface for vending machine 1
class VENDINGMACHINE1
{
    public:
        VENDINGMACHINE1();
        virtual ~VENDINGMACHINE1();

        //these functions are events of vending machine 1
        void create(int p);
        void coin(int v);
        void sugar();
        void tea();
        void chocolate();
        void insert_cups(int n);
        void set_price(int p);
        void cancel();

    private:
        MDAEFSM *m;
        DataStore *DS;

};

#endif // VENDINGMACHINE1_H
