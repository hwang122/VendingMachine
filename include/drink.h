#ifndef DRINK_H
#define DRINK_H

//This class is used to represent different types of drink
class Drink
{
    public:
        Drink(){};
        virtual ~Drink(){};

        //abstract funtion of dispose drink
        virtual void DisposeDrink(){};
};

//This class represents drink tea
class Tea : public Drink
{
    public:
        Tea(){};
        virtual ~Tea(){};

        //dispose a cup of tea
        virtual void DisposeDrink();
};

//This class represents drink chocolate
class Chocolate : public Drink
{
    public:
        Chocolate(){};
        virtual ~Chocolate(){};

        //dispose a cup of chocolate
        virtual void DisposeDrink();
};

//This class represent drink coffee
class Coffee : public Drink
{
    public:
        Coffee(){};
        virtual ~Coffee(){};

        //dispose a cup of coffee
        virtual void DisposeDrink();
};
#endif // DRINK_H
