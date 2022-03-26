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
            i=50;
        }

        void fun()
        {
            this -> i = 100;
        }
};

int main()
{
    Digit obj;

    cout<<endl<<obj.i;

    obj.fun();

    cout<<endl<<obj.i;

    getch();
    return 0;
}
