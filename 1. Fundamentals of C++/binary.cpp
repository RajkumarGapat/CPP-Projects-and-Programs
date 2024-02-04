#include<iostream>
using namespace std;
int main()
{
    int num,i,countIndex=0;
    int rem[10];
    cout<<"Enter Your number = ";
    cin>>num;

    for(i=0;num>0;i++)
    {
        rem[i]=num%2;
        num=num/2;
        cout<<"Rem = "<<rem[i]<<" and num = "<<num<<endl;
        countIndex++;
    }
    cout<<countIndex<<endl;

//cout<<i<<endl;
    for(i=(countIndex-1);i>=0;i--)
    {
       cout<<rem[i];
    }

    
    return 0;
}