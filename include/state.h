#include "..\include\op.h"

#ifndef STATE_H
#define STATE_H

class MDAEFSM;

//this class is the abstract class of state
class State
{
    public:
        State(){};
        virtual ~State(){};

        virtual void create() = 0;
        virtual void insert_cups(int n) = 0;
        virtual void coin(int f) = 0;
        virtual void cancel() = 0;
        virtual void set_price() = 0;
        virtual void dispose_drink(int d) = 0;
        virtual void additive(int a) = 0;
};

//this is state start
class start : public State
{
    public:
        start(MDAEFSM *pMDA, OP *op);
        virtual ~start(){};

        //it just realize a function create()
        virtual void create();
        virtual void insert_cups(int n){};
        virtual void coin(int f){};
        virtual void cancel(){};
        virtual void set_price(){};
        virtual void dispose_drink(int d){};
        virtual void additive(int a){};

    private:
        MDAEFSM *m;
        OP *op;
};

//this is state no_cups
class no_cups : public State
{
    public:
        no_cups(MDAEFSM *pMDA, OP *op);
        virtual ~no_cups(){};

        //it realize function, insert_cups, coin
        virtual void create(){};
        virtual void insert_cups(int n);
        virtual void coin(int f);
        virtual void cancel(){};
        virtual void set_price(){};
        virtual void dispose_drink(int d){};
        virtual void additive(int a){};

    private:
        MDAEFSM *m;
        OP *op;
};

//this is state idle
class idle : public State
{
    public:
        idle(MDAEFSM *pMDA, OP *op);
        virtual ~idle(){};

        //it realize insert_cups, coin and set_price
        virtual void create(){};
        virtual void insert_cups(int n);
        virtual void coin(int f);
        virtual void cancel(){};
        virtual void set_price();
        virtual void dispose_drink(int d){};
        virtual void additive(int a){};

    private:
        MDAEFSM *m;
        OP *op;
};

//this is state coin_inserted
class coin_inserted : public State
{
    public:
        coin_inserted(MDAEFSM *pMDA, OP *op);
        virtual ~coin_inserted(){};

        //it realize function coin, cancel, dispose_drink and additive
        virtual void create(){};
        virtual void insert_cups(int n){};
        virtual void coin(int f);
        virtual void cancel();
        virtual void set_price(){};
        virtual void dispose_drink(int d);
        virtual void additive(int a);

    private:
        MDAEFSM *m;
        OP *op;
};
#endif // STATE_H
