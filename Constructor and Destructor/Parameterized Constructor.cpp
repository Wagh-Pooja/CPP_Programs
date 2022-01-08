#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class Cal
{
    public:
        int i,j,Sum;

        Cal();
        Cal(int,int);

        void Add();
};

Cal::Cal()
{
    cout<<"\n Inside Default Constructor";

    i = 0;
    j = 0;
    Sum = 0;
}

Cal::Cal(int x, int y)
{
    cout<<"\n Inside Parameterized Constructor";

    i = x;
    j = y;
    Sum = 0;
}

void Cal::Add()
{
    Sum = i + j;
}

int main()
{
    Cal obj1;

    cout<<"\n Enter Two Numbers ==";
    cin>>obj1.i>>obj1.j;

    obj1.Add();
    cout<<"\n Addition Of "<<obj1.i<<" And " << obj1.j<< " Is = " << obj1.Sum;


    Cal obj2(5,9);

    obj2.Add();
    cout<<"\n Addition Of "<<obj2.i<<" And " << obj2.j<< " Is = " << obj2.Sum;

    getch();
    return 0;

}
