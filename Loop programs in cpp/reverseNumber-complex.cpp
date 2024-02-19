#include<iostream>
using namespace std;
class Reverse
{
    public:long long int num,rev=0,rem;
    public:Reverse()
    {
    cout<<"Enter a Positive number = ";
    cin>>num;//7845
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
   
};
int main()
{
    Reverse r1;
    cout<<"Reverse Number = "<<r1.findReverse();

    return 0;
}