#include<iostream>
using namespace std;
class Base
{
   public:int a;
   public:int num;
};

class B : public Base
{ 
    public: int b;
 
};

class C : public Base
{
  public: int c;
};

class D : public B, public C
{ 

    public:int d;

};
int main()
{
     D abcd;
     
     abcd.num=5; // In hybrid class we are not able to access Parent class Variables as B and C both have a member so there is confusion
     cout<<"abcd.a = "<<abcd.a<<endl;

     abcd.b=20;
     cout<<"abcd.b = "<<abcd.b<<endl;

     abcd.c=30;
     cout<<"abcd.c = "<<abcd.c<<endl;

     abcd.d=40;
     cout<<"abcd.d = "<<abcd.d<<endl;

    return 0;
}
