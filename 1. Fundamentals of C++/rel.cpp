#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter Your Number ";
     cin>>n;
     int res=n<10;
     cout<<"n<10 = "<<res<<endl;
     res=n>10;
    
     cout<<"n>10 = "<<(n>10)<<endl;
     cout<<"n==10 = "<<(n==10)<<endl;
     cout<<"n != 10 = "<<(n!=10)<<endl;
     cout<<"n <= 10 = "<<(n<=10)<<endl;
     cout<<"n >= 10 = "<<(n>=10)<<endl;    
    return 0;
}