#ifndef VM1_H
#define VM1_H


class vm1
{
    public:
        vm1();
        virtual ~vm1();
        void create(int);
        void coin();
        void sugar();
        void tea();
        void chocolate();
        void insert_cups(int);
        void set_price(int);
        void cancel();
    protected:
    private:
        int p;
};

#endif // VM1_H
