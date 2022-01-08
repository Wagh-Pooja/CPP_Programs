#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class Numbers
{
    private:
        int x, y;

        void sun()
        {
            cout<<endl<<"Inside Private sun() Function Call:"<<endl;
            cout<<endl<<"Values ="<<x<< " " <<i<< " " <<a<<endl;
        }

    public:
        int i, j;

        Numbers()
        {
            i = j = x = y = 10;
            a = b = 20;

            cout<<endl<<"Inside Default Constructor:"<<endl;
        }

        Numbers(int N1, int N2, int N3)
        {
            x = y = N1;
            i = j = N2;
            a = b = N3;

            cout<<endl<<"Inside Parameterized constructor:"<<endl;
        }

        void fun()
        {
            cout<<endl<<"Inside Public fun() Function Call:"<<endl;
            cout<<endl<<"Values ="<<y<<" "<<j<< " " << b<< endl;

            sun();
            gun();

        }

    protected:

        int a, b;

        void gun()
        {
            cout<<endl<<"Inside Protected gun() Function Call:"<<endl;
            cout<<endl<<"Values ="<<x<< " " << j << " " << a<< endl;
        }
};

int main()
{
    Numbers obj1;

    getch();

    obj1.fun();

    Numbers obj2(100,200,300);

    obj2.fun();

    cout<<endl<<obj1.i;

    cout<<endl<<obj2.j;

    getch();
    return 0;

}
