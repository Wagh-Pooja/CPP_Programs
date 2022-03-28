#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Element
{
    public:
        int i, j;

        Element()
        {
            i = 20;
            j = 60;
        }

        void fun()
        {
            delete this;
        }
};

int main()
{
    Element *Ele = new Element();
    Ele -> fun();

    getch();
    return 0;
}
