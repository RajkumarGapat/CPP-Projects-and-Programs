#include<iostream>
using namespace std;
class base
{
   public:int a;
};

int main()
{
   base b; //object of class base
   cout<<"Let's access a membervariable by only object:- \n";
   b.a=10;
   cout<<"a = "<<b.a<<endl;

   cout<<"Let's access a membervariable by pointer of base class:- \n";
   base *p; // pointer of base class
   p=&b; // now pointer is pointing to every public member of base class
   p->a=20;
   cout<<"a = "<<p->a<<endl;

    return 0;
}