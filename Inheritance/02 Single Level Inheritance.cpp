#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Base
{
    public:
        int i,j;

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

class Derived : public Base
{
    public:
        int x,y;

        Derived()
        {
            cout<<"Derived::Constructor"<<endl;
        }

        ~Derived()
        {
            cout<<"Derived::Destructor"<<endl;
        }

        void gun()
        {
            cout<<"gun() of Derived"<<endl;
        }

};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<endl<<sizeof(bobj)<<endl;

    cout<<endl<<sizeof(dobj)<<endl;

    getch();
    return 0;
}
