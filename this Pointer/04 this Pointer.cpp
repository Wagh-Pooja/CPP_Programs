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
            i = 50;
            j = 70;
        }

        void fun(int i, int j)
        {
            cout<<endl<<i<<endl<<j<<endl;
            cout<<endl<<this -> i<<endl<<this -> j<<endl;
        }
};

int main()
{
    Digit obj;

    obj.fun(100, 200);

    getch();
    return 0;
}
