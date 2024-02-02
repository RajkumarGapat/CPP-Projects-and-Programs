//write a program to find area of circle in c++ programming with oopsconcept or object oriented coding
#include<iostream>
using namespace std;
class Circle
{
   public:int r;
   float ar;
   public:void input()
   {
      cout<<"\n Enter Radious of Cricle = ";
      cin>>r;
   }

   public:void radious()
   {
       cout<<"Radious = "<<r<<endl;
   }
   void area()
   {
     ar=3.14*r*r;
    cout<<"Area of Circle = "<<ar;
   }
   void circum()
   {
       float cr=2*3.14*r;
       cout<<"Circumferrence of Circle = "<<cr<<endl;

   }


};
int main()
{
    Circle c1;
    c1.input();
    c1.area(); 

    c1.input();
    c1.radious();
    c1.circum();  

    c1.r=20; //r is accessable here as r is not private it is a public member fubction
    c1.area(); 

     cout<<"\n Enter Radious of Cricle = ";
      cin>>c1.r;
    c1.area(); 
    return 0;
}

class vehicle
{
   protected :int wheels;
};

class car:vehicle
{
    public: int doors;
};

int main()
{
    vehicle v1;
    v1.wheels=4;
    v1.doors=4;

    car c1;
    c1.wheels=4;
    c1.doors=4;

  return 0;
}