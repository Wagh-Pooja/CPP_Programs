#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

void Ref(int &);

int main()
{
    int No = 75;

    cout<<endl<<"Value Before Function Call ==>"<<No<<endl;

    Ref(No);

    cout<<endl<<"Value Before Function Call ==>"<<No<<endl;

    getch();
    return 0;

}

void Ref(int &cRef)
{
    cRef++;
}
