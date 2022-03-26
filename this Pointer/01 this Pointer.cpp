#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Digit
{
    public:
        int i, j;

        Digit()
        {
            i=12;
            j=8;
        }

        void fun(int x)
        {
            cout<<i<<endl<<j<<endl<<x;
        }
};

int main()
{
    Digit obj;
    obj.fun(21);            ///fun(&obj,21);
}
