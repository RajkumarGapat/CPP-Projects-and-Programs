//2)	To define a function outside a class.
// C++ program to show that scope resolution operator :: is used
// to define a function outside a class
/*
Syntax:-
returntype classname :: functionname()
{

}
e.g 
class Anupma
{
    void sayHello();
};
void Anupma :: sayHello()
{
    cout<<"Hey Hi students";
}
*/



#include<iostream> 
using namespace std;
  
class A 
{
public: 
  
   // Only declaration
   void fun();
};
  
// Definition outside class using ::
void A::fun()
{
   cout << "fun() called";
}
  
int main()
{
   A a;
   a.fun();
   return 0;
}
