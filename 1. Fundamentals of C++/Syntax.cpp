/*
Syntax of Constructor

public:classname()
{

}

Rules:- 
1. Construtor name and classname will be same
2. no void
3. Cannot call construtcor
4. it will call automatically when you will create object of class
*/
#include<iostream>
using namespace std;
class Anupma
{
   public:Anupma()
   {
       cout<<"Hello User I am your constructor";
   }

};

int main()
{
      Anupma raj; //Automatically calling constructor
      //Datatype variablename; //variable creations
      //Classname Objectname; // object creation

    return 0;
}