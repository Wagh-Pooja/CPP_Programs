#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Digit
{
    public:

        Digit()
        {
            cout<<endl<<"Constructor Call"<<endl;
            this -> fun();
        }

        ~Digit()
        {
            cout<<endl<<"Destructor Call"<<endl;
            this -> gun();
        }

        void fun()
        {
            cout<<endl<<"fun() Function Call"<<endl;
        }

        void gun()
        {
            cout<<endl<<"gun() Function Call"<<endl;
        }
};

int main()
{
    Digit obj;

    getch();
    return 0;
}
