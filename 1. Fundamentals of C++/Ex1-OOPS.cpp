//write a program to find area of circle in c++ programming with oopsconcept or object oriented coding
#include<iostream>
using namespace std;
class Circle
{
   int r;
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

    
    return 0;
}
/* Steps:- 
1. make class before main function
2. declare member variables in class and decide that they will be global or not ,private or public 
3. create function for user's value e.g input()
4. create display of user's value e.g radious()
5. create function of logic or calculations e.g area()
6. My Class Circle is ready now, so in main function create object of circle class
7. Syntax Classname Objectname; means Circle c1;
8. Access member function or whatever you want by apply . operator with objectname
   Syntax of Aceess class member variable
   1. objectname.variablename=value;
   e.g c1.r=10; //but in above you can't access ras r is private classe member
   Syntax of Aceess class member function
   objectname.functioname();
   e.g c1.input(); //as input is public member function so easily we can access by object
*/
