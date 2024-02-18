//Example of Call by reference for function
#include<iostream>
using namespace std;
void showUserNumber(int *a)
{
    *a=*a+6; //*a=20+6; means 26
    cout<<"a = "<<*a<<endl;
     *a=*a+1; //*a=*a+1; means *a=26+1; means 27
     cout<<"a = "<<*a<<endl;
     *a=*a+10; // *a = 27+10; means 37
    cout<<"a = "<<*a<<endl;
}

int main()
{
  
    int s=20;
    
    showUserNumber(&s); ///here compiler will do int *p=&s; by copy value of s variable and paste in a variable // 37
    cout<<"s in main function = "<<s<<endl; //s=37;
    return 0;
}