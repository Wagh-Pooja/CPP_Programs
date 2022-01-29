#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class A
{
    public:
        int i;

        A()
        {
            cout<<"A::Constructor"<<endl;
        }

        ~A()
        {
            cout<<"A::Destructor"<<endl;
        }

};

class B
{
    public:
        int j;

        B()
        {
            cout<<"B::Constructor"<<endl;
        }

        ~B()
        {
            cout<<"B::Destructor"<<endl;
        }

};

class C
{
    public:
        int k;

        C()
        {
            cout<<"C::Constructor"<<endl;
        }

        ~C()
        {
            cout<<"C::Destructor"<<endl;
        }

};

class D
{
    public:
        int l;

        D()
        {
            cout<<"D::Constructor"<<endl;
        }

        ~D()
        {
            cout<<"D::Destructor"<<endl;
        }

};

class E: public C, public D
{
    public:
        int x;

        E()
        {
            cout<<"E::Constructor"<<endl;
        }

        ~E()
        {
            cout<<"E::Destructor"<<endl;
        }

};

class F: public A, public C
{
    public:
        int y;

        F()
        {
            cout<<"F::Constructor"<<endl;
        }

        ~F()
        {
            cout<<"F::Destructor"<<endl;
        }

};

class G:public E, public F
{
    public:
        int z;

        G()
        {
            cout<<"G::Constructor"<<endl;
        }

        ~G()
        {
            cout<<"G::Destructor"<<endl;
        }

};


int main()
{
    A obja;

    cout<<endl;

    G objg;

    cout<<endl;

    F objf;

    cout<<endl;

    getch();
    return 0;
}

