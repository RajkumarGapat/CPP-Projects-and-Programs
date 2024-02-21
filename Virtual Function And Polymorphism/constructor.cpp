#include<iostream>
using namespace std;
class parent
{
    public:int a,b;
  public: parent()
  {
       a=10;
       b=20;
      cout<<"Hello I am Parent's Constructor"<<endl;
  }
};

class child : public parent
{
   public : child()
   { 
       int sum=a+b;
       cout<<"Hello I am Child's Constructor and sum is "<<sum<<endl;
   }
};

int main()
{
    parent p1; //calling parent class constructor

//by below line calling parent and child constructor by creating object of child c1, so we can avoid parent p1 line
    child c1;  //calling parent and child class constructor
    return 0;
}





















/*

*/