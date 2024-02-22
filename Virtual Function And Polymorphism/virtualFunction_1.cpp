#include<iostream>
using namespace std;
class A 
{ 
        public:int a; 
        public: 
        //below is constructor of class A
        A() 
        {
                 a = 1; 
        } 
        virtual void show() 
        { 
                    cout <<a;
        } 
       public: void saySomething()
        {
             cout<<"Hi \n";
        }
};
class B: public A 
{ 
         public:int b; 
         public: 
         //constructor of child class B
         B() 
         { 
                 b = 2; 
         }
         virtual void show() 
         {  
                  cout <<b;
         }
         public:void say()
        {
             cout<<"Hello \n";
        }
}; 
int main() 
{ 
         A *p; //pointer variable of Parent A class
         A a1; //object of class A
         p=&a1;//assigning parent class A object

         p->saySomething();
         p->show();
          
          
          
          
          //when we will assign child class object to parent class pointer then we cannot access any child class function
          B oB;  //object of child Class B
          p=&oB; 
         // p->say(); // we cant access as Pointer is of  Parent class
         p->show(); //? Now how a parent class pointer is calling child class function because of virtual keyword , this is called later binding
           
          
         
           p = &oB; //Asiging Object of B class(child) in Pointer of Class A(Parent)
        p->saySomething();


           p->show(); //Now Pointer will call child class's show function output will be 2
           //In above line Pointer will go first in that class related to refernced object
           //Means :- Object will be in priority of Pointer
           
           return 0; 
} 
