#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Base1
{
    public:
        int i;

        Base1()
        {
            cout<<"Base1::Constructor"<<endl;
        }

        ~Base1()
        {
            cout<<"Base1::Destructor"<<endl;
        }

        void fun()
        {
            cout<<"fun() of Base1"<<endl;
        }

};

class Base2
{
    public:
        int j;

        Base2()
        {
            cout<<"Base2::Constructor"<<endl;
        }

        ~Base2()
        {
            cout<<"Base2::Destructor"<<endl;
        }

        void gun()
        {
            cout<<"gun() of Base2"<<endl;
        }

};

class Base3
{
    public:
        int k;

        Base3()
        {
            cout<<"Base3::Constructor"<<endl;
        }

        ~Base3()
        {
            cout<<"Base3::Destructor"<<endl;
        }

        void sun()
        {
            cout<<"sun() of Base3"<<endl;
        }

};

class Derived : public Base2,
                public Base1,
                public Base3
{
    public:
        int x;

        Derived()
        {
            cout<<"Derived::Constructor"<<endl;
        }

        ~Derived()
        {
            cout<<"Derived::Destructor"<<endl;
        }

        void Der()
        {
            cout<<"Der() of Derived"<<endl;
        }

};

int main()
{
    Base1 bobj1;
    Base2 bobj2;
    Base3 bobj3;

    Derived dobj;

    getch();
    return 0;
}

