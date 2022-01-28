#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Base
{
    public:
        int i;

        Base()
        {
            cout<<"Base::Constructor"<<endl;
        }

        ~Base()
        {
            cout<<"Base::Destructor"<<endl;
        }

        void fun()
        {
            cout<<"fun() of Base"<<endl;
        }

};

class Derived1 : public Base
{
    public:
        int j;

        Derived1()
        {
            cout<<"Derived1::Constructor"<<endl;
        }

        ~Derived1()
        {
            cout<<"Derived1::Destructor"<<endl;
        }

        void gun()
        {
            cout<<"gun() of Derived1"<<endl;
        }

};

class Derived2 : public Derived1
{
    public:
        int k;

        Derived2()
        {
            cout<<"Derived2::Constructor"<<endl;
        }

        ~Derived2()
        {
            cout<<"Derived2::Destructor"<<endl;
        }

        void sun()
        {
            cout<<"sun() of Derived2"<<endl;
        }

};

int main()
{
    Base bobj;
    Derived1 dobj1;
    Derived2 dobj2;

    cout<<endl<<sizeof(bobj)<<endl;

    cout<<endl<<sizeof(dobj1)<<endl;

    cout<<endl<<sizeof(dobj2)<<endl;

    getch();
    return 0;
}
