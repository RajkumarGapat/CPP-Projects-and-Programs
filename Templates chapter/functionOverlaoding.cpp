//function overlaoding is - function name is same but different by parameters
// 1 parameter can be different by datatype
// 2 parameter can be different by numbers
#include<iostream>
using namespace std;
void show()
{
    cout<<"Hello Students "<<endl;
}
void show(int id)
{
    cout<<"Hello Students your student id is  "<<id<<endl;    
}

void show(string name)
{
    cout<<"Hello "<<name<<endl;  
}
void show(int a,int b)
{
    int sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" = "<<sum<<endl;
}
void show(string uname,int ps)
{
   if(ps==1234)
   {
       cout<<"Hello "<<uname<<" Welcome in My lectures \n";
   }
   else{
       cout<<"Invalid Password !! ";
   }
}
int main()
{

show(101);
show();
show(7,8);
show("anupma",1234);
show("simar",7234);
    return 0;
}