#include<iostream>
using namespace std;
class A
{
   public:int a;
   public:int num;
};

class B : public A
{ 
     //By Inheritance a and num are also here 
    public: int b;
 
};

class C
{
  public: int c;
};

class D : public B, public C
{ 
 //due to inheritance  a , num , b and d are here 
    public:int d; 

};
int main()
{
     D abcd;
     
     abcd.num=5; // In hybrid class we are not able to access Parent class Variables?
     cout<<"abcd.num = "<<abcd.num<<endl;

     abcd.a=10;
     cout<<"abcd.a = "<<abcd.a<<endl;

     abcd.b=20;
     cout<<"abcd.b = "<<abcd.b<<endl;

     abcd.c=30;
     cout<<"abcd.c = "<<abcd.c<<endl;

     abcd.d=40;
     cout<<"abcd.d = "<<abcd.d<<endl;

    return 0;
}
