#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

void Addr(int *);

int main()
{
    int No = 25;

    cout<<endl<<"Value Before Function Call ==>"<<No<<endl;

    Addr(&No);

    cout<<endl<<"Value After Function Call ==>"<<No<<endl;

    getch();
    return 0;
}

void Addr(int *p)
{
    (*p)++;
}
