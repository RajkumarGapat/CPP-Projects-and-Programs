#include<iostream>
using namespace std;
class Factors
{
    public:int num,rem;
    int i;
    public:Factors()
    {
    cout<<"Enter a Positive number = ";
    cin>>num;
    }
     void showFactors()
  {
      cout<<"Factors of "<<num<<" = ";
      i=1;
    while(i<=num)
    {
        rem=num%i;
        if(rem==0)
        {
            cout<<i<<" ";
        }
       
       i++;
    } 
     
   }
   
};
int main()
{
    Factors ob;
    ob.showFactors();

    return 0;
}