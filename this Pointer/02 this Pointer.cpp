#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Digit
{
    public:
        int i;

        Digit()
        {
            i=25;
        }

        void fun()
        {
            cout<<endl<<this -> i<<endl;
            cout<<endl<<i<<endl;
            cout<<endl<<(*this).i<<endl;

            this -> gun();
            (*this).gun();
        }

        void gun()
        {
            cout<<endl<<"gun() Function"<<endl;
        }
};

int main()
{
    Digit obj;
    obj.fun();
}
