// Operator Precedence a situation when you are using multiple operators on some variables, but which will execute first and then
//Multiple,Divide,Plus,Minus
#include<iostream>
using namespace std;
class OpPrecedence
{ 
     float result;
     public: void logic1()
     {
         result= 4.0 + 3.0 * 8.0 / 4.0; // 3.0*8.0 ,24.0/4.0 , 4.0+6.0, 10.0
         cout<<"Result =  "<<result<<endl;
         
     }
     public: void logic2()
     {
         result= 1.0 / 2.0 +3.0; //   divide then plus
         cout<<"Result =  "<<result<<endl;
         
     }  

      public: void logic3()
     {
         result= (1.0 + 2.0) / 3.0; //  plus of bracket, then divide
         cout<<"Result =  "<<result<<endl;         
     }   

      public: void logic4()
     {
         result= (1.0 + 2.0 / 3.0) + 4.0; //   divide ,add ,add
         cout<<"Result =  "<<result<<endl;
         
     }  

     

};
int main()
{
     OpPrecedence op; //object
     op.logic1();
     op.logic2();
     op.logic3();
     op.logic4();
     return 0;
}