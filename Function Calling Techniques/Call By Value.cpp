#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

void Value(int);

int main()
{
    int No = 50;

    cout<<"\n Value Before Function Call =>"<< No <<endl;

    Value(No);

    cout<<"\n Value After Function Call =>"<< No <<endl;

    getch();
    return 0;
}

void Value(int Num)
{
    Num++;
}
