#ifndef ADDITIVE_H
#define ADDITIVE_H

//used to represent different addititives
class Additive
{
    public:
        Additive(){};
        virtual ~Additive(){};

        //abstract class of disposing additive
        virtual void DisposeAdditive(){};
};

//represent additive sugar
class Sugar : public Additive
{
    public:
        Sugar(){};
        virtual ~Sugar(){};

        //dispose sugar
        virtual void DisposeAdditive();
};

//represent additive cream
class Cream : public Additive
{
    public:
        Cream(){};
        virtual ~Cream(){};

        //dispose cream
        virtual void DisposeAdditive();
};

#endif // ADDITIVE_H
