#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Cal
{
    public:
        int i,j,Sum;

        Cal();

        void Add();
};

Cal::Cal()
{
    cout<<"\n Inside Default Constructor";

    i = 0;
    j = 0;
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

    getch();
    return 0;

}
