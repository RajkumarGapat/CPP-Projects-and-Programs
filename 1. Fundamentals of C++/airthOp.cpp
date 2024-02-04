//write a program to display use of increment or decrement operator
#include<iostream>
using namespace std;
int main()
{
    int a=45,b=20,c=80;
    cout<<"a = "<<a<<endl; // 45
    a++; //a=a+1;
    cout<<"a = "<<a<<endl; // 46
     b++;
     c++;
     cout<<"b = "<<b<<endl; // 21
     cout<<"c = "<<c<<endl; //81
     a=b+c; 
     cout<<"a = "<<a<<endl; //102
     a=b++;
     cout<<"a = "<<a<<endl; // 21
     cout<<"b = "<<b<<endl; //22
     
      int d=7;
      a=d-c;
      cout<<"a = "<<a<<endl; // a=7-81 = -74
      b=a+d;
      cout<<"b = "<<b<<endl; // b=-74+7; -67
      b=a++;
      cout<<"a = "<<a<<endl;//-73
      cout<<"b = "<<b<<endl;//-74



    return 0;

}