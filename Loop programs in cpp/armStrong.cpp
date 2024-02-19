#include<iostream>
using namespace std;
class Armstrong
{
    public:int num,sum=0,res,rem,usernum;
    public:Armstrong()
    {
    cout<<"Enter any three digit number  = ";
    cin>>num;//7845
    usernum=num;
    }
     void findSum()
  {
    while(num != 0)
    {
    rem=num%10;  
    res=rem*rem*rem;
    sum=sum+res;
    num=num/10;   
    } 
    
   }
   void checkArmstrong()
   {
       if(sum==usernum)
       {
           cout<<usernum<<" is a Armstrong Number "<<endl;
       }
       else
       {
           cout<<usernum<<" is not a Armstrong Number "<<endl;
       }
   }
   
};
int main()
{
    Armstrong ob;
    ob.findSum();
    ob.checkArmstrong();
    return 0;
}