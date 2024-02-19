#include <iostream>
using namespace std;
class factorial
{
   int n, i,flag;
   unsigned long long int fact = 1;
   public:factorial()
   {
    cout<<"Enter an integer: ";
    cin>>n;
   }
   void findFact()
   {
       for (i = 1; i <= n; i++) 
             {
                //fact *= i;
                fact=fact*i; //1*1=1 means 2*1=2 means 2*3=6 means 6*4=24 means 24*5=120
             }
             cout<<"Factorial of "<<n<<" = "<<fact<<endl;
         

   }
   void check()
   {
   // shows error if the user enters a negative integer
    if (n < 0)
    {
        cout<<"Error! Factorial of a negative number doesn't exist.";
     }
    else {
               findFact();
         }
   }


};
int main() 
{
   factorial f1; //calling constructor
    f1.check(); 
  
return 0;
  
}
