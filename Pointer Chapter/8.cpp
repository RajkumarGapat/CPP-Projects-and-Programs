//Example of Call by value for function
#include<iostream>
using namespace std;
void showUserNumber(int a)
{
     a=a+6;
     a++;
     a=a+10;
    cout<<"a = "<<a<<endl;
}

int main()
{
    showUserNumber(5); //here compiler will do int a=5 by copy 5 and paste in a variable // 22
    int s=20;
    
    showUserNumber(s); ///here compiler will do int a=s; by copy value of s variable and paste in a variable // 37
    cout<<"s in main function = "<<s<<endl; //s=20;
    return 0;
}