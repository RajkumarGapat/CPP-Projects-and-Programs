#include<iostream>
using namespace std;
//below is function declaration
 void demo();

int main()
{

    demo(); //function calling
    demo(); //function calling
    return 0;
}
//below is function definition
void demo()
{
    cout<<"Hello Students ,you all belongs to c++ batch \n";
}
/*
Funtion ways:-
1. Function Declaration or function declare -- in function declaration there is no body of function
   Syntax :- returntype functioname();
   e.g void demo();
2. Function Defintion -- Defintion has everything 
   Syntax:- returntype functioname()
   {
       //function code
   } 
   e.g
   void demo()
   {
    cout<<"Hello Students ,you all belongs to c++ batch \n";
   }
3. Function Calling -- Without function calling code of function body will not execute.
   -> Function most of the times have to call another function
   Syntax:- functioname();
   e.g demo();
Note:-
-> You can call multiple times a function ,there is no limit on calling
-> When you are creating a function it means you are creating userdefined datatype
-> Function Declaration is not must when there is defintion but sometimes we have to write function defintion
   in below of main function so we will have to declare function just above main function
*/