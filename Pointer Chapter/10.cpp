//Example of Pass by reference for function
#include<iostream>
using namespace std;
void showUserNumber(int &a)
{
   
    cout<<"a = "<<&a<<endl;
}

int main()
{
  
    int s=20;
    
    showUserNumber(s); ///here compiler will do int *p=&s; by copy value of s variable and paste in a variable // 37
    cout<<"address of s in main function = "<<&s<<endl; //s=37;
    return 0;
}