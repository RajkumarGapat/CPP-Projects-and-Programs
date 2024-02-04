/*Syntax:-
used to make less code of if-else

condition ? trueCode : falseCode
e.g 
int a=10,b=20;
a>b ? a : b;
*/

#include<iostream>
using namespace std;
class Ternary
{ 
     int a,b;
     public: void set()
     {
         cout<<"Enter two Numbers = ";
         cin>>a>>b;
     }
     void get()
     {
         cout<<"a = "<<a<<endl<<" b = "<<b<<endl;
     }
     void findMax()
     {
         cout<<"findMax() function is Processing: ---- \n";
         int max; //local variable of findMax() function
         max=(a>b) ? a :b;   
         cout<<"Maximum Value is "<<max<<endl;     
          
     }

     int checkMax()
     {
         cout<<"checkMax() function is Processing: ---- \n";
         int m;
         m=(a>b) ? a :b;    
         return m;
     }

};
int main()
{
     Ternary t1; //object

     t1.set();
     t1.get();
     t1.findMax();

     //There are two ways to call checkMax()
     //below is method 1
     int res=t1.checkMax();
     cout<<"Maximum value is = "<<res<<endl;

     //below is method 2
     cout<<"Maximum Value is = "<<t1.checkMax()<<endl;





    return 0;
}