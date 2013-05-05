#ifndef DATASTORE_H
#define DATASTORE_H

//abstract class of the Data Store
class DataStore
{
    public:
        DataStore(){};
        virtual ~DataStore(){};

        /* All the functions below is the virtual function
            used to get and set the data in Data Store*/
        virtual int GetVM1TempPrice() {return 0;};
        virtual void SetVM1TempPrice(int price) {};

        virtual int GetVM1TempCF() {return 0;};
        virtual void SetVM1TempCF(int cf) {};

        virtual int GetVM1Price() {return 0;};
        virtual void SetVM1Price(int price) {};

        virtual int GetVM1CF() {return 0;};
        virtual void SetVM1CF(int cf) {};

        virtual float GetVM2TempPrice() {return 0;};
        virtual void SetVM2TempPrice(float price) {};

        virtual float GetVM2TempCF() {return 0;};
        virtual void SetVM2TempCF(float cf) {};

        virtual float GetVM2Price() {return 0;};
        virtual void SetVM2Price(float price) {};

        virtual float GetVM2CF() {return 0;};
        virtual void SetVM2CF(float cf) {};

};

//This class is used to store the data of Vending Machine 1
class DataStore1 : public DataStore
{
    public:
        DataStore1() : DataStore(){};
        virtual ~DataStore1(){};

        //get and set tempPrice
        virtual int GetVM1TempPrice();
        virtual void SetVM1TempPrice(int price);

        //get and set tempCF
        virtual int GetVM1TempCF();
        virtual void SetVM1TempCF(int cf);

        //get and set price
        virtual int GetVM1Price();
        virtual void SetVM1Price(int price);

        //get and set CF
        virtual int GetVM1CF();
        virtual void SetVM1CF(int cf);

    private:
        int tempPrice = 0;
        int tempCF = 0;
        int price = 0;
        int cf = 0;
};

//This class is used to store the data of Vending Machine 2
class DataStore2 : public DataStore
{
    public:
        DataStore2() : DataStore(){};
        virtual ~DataStore2(){};

        //get and set tempPrice
        virtual float GetVM2TempPrice();
        virtual void SetVM2TempPrice(float price);

        //get and set tempCF
        virtual float GetVM2TempCF();
        virtual void SetVM2TempCF(float cf);

        //get and set price
        virtual float GetVM2Price();
        virtual void SetVM2Price(float price);

        //get and set CF
        virtual float GetVM2CF();
        virtual void SetVM2CF(float cf);

    private:
        float tempPrice = 0;
        float tempCF = 0;
        float price = 0;
        float cf = 0;
};
#endif // DATASTORE_H
