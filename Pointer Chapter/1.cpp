#include<iostream>
using namespace std;
int main()
{
    int a=10; //simple variable
    int *p; // pointer variable of integer type
    p=&a; //assigning pointer p to variable a

    cout<<"First time value of a = "<<a<<endl;
    cout<<"Value of a by pointer variable = "<<*p<<endl;


    cout<<"Let's change value of a by pointer \n";
    *p=20;

    cout<<"Second time value of a = "<<a<<endl;
    cout<<"Value of a by pointer variable = "<<*p<<endl;

   


    return 0;
}