/*
Steps for Pointer in Class
1. Create pointer variable of class by below syntax:
    classname *pointername;
    e.g demo *p;

 2. assign address of object of same class  to pointer like below syntax:
    pointername=&objectname;
    e.g demo d1; //object of class
        p=&d1; //assigning of object to pointer
 3. Now we can access class members by pointer also, check below syntax:-
    pointername -> classmember = value;
    e.g  p -> a=10;
         p ->show();  

*/

#include <iostream>
 
using namespace std;
 class demo
 {
    public: int a;
     public: void show()
     {
         cout<<"a = "<<a<<endl;
     }
 };
int main () {
   demo d1; //object of a demo class
   demo *p; // pointer of a demo class
    p = &d1;
    p ->a=10;
    p->show();
   

   return 0;
}
