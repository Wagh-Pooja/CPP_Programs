#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Base
{
    public:
        int Add(int No1, int No2)
        {
            int Ans = 0;
            Ans = No1 + No2;
            return Ans;
        }

};

class Derived : public Base
{
    public:
        int myAdd(int No1, int No2, int No3)
        {
            int Res = 0;
            Res = Add(Add(No1, No2),No3));
            return Res;
        }

};

int main()
{
    Base bobj;
    bobj.Add(15,55);

    Derived dobj;
    dobj.myAdd(40, 60, 100);

    getch();
    return 0;
}
