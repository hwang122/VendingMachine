#include "..\include\state.h"
#include "..\include\op.h"

#ifndef MDAEFSM_H
#define MDAEFSM_H

//This class is the realization of MDA EFSM
class MDAEFSM
{
    public:
        MDAEFSM(OP *op);
        ~MDAEFSM();

        //MDA EVENTs
        void create();
        void insert_cups(int n);
        void coin(int f);
        void cancel();
        void set_price();
        void dispose_drink(int d);
        void additive(int a);
        void changeState(int i);

        //set and get internal data A and k
        void SetA(int a);
        int* GetA();
        void SetK(int n);
        int GetK();

    private:
        State *p;
        start *START;
        no_cups *NOCUPS;
        idle *IDLE;
        coin_inserted *COININSERT;

        int *A;
        int k = 0;
};

#endif // MDAEFSM_H
