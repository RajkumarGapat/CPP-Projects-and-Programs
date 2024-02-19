#include<iostream>
using namespace std;
class Reverse
{
    public:long long int num,rev=0,rem,usernum;
    public:Reverse()
    {
    cout<<"Enter a Positive number = ";
    cin>>num;//7845
    usernum=num;
    }
     int findReverse()
  {
    while(num != 0)
    {
    rem=num%10;  //5 //4 //8 //7
    rev=rev * 10 + rem; 
    // rev=0*10+5 means rev=5 // rev=5*10+4; rev=54 // rev=54*10+8; rev=548 //rev=548*10+7; rev=5487
    num=num/10; //num=784 //78 // 7 //0    
    } 
    return rev;  
   }
   void checkPalindrome()
   {
       if(rev==usernum)
       {
           cout<<usernum<<" is a Palindrome Number "<<endl;
       }
       else
       {
           cout<<usernum<<" is not a Palindrome Number "<<endl;
       }
   }
   
};
int main()
{
    Reverse r1;
    cout<<"Reverse Number = "<<r1.findReverse()<<endl;
    cout<<"\n\n************************** \n\n";
    r1.checkPalindrome();

    return 0;
}