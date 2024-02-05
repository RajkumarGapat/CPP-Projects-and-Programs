/*
1)	To access a global variable when there is a local variable with same name:

*/
#include<iostream>
using namespace std;
int x=10; //Global variable
int main()
{
    int x=99; //local variable of main
    cout<<"local Variable x = "<<x<<endl;
    cout<<"Global Variable x = "<<::x<<endl;
    return 0;
}

