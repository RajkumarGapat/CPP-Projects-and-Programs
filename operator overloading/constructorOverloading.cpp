#include<iostream>
using namespace std;
class Show
{

public:
Show()
{
    cout<<"I am Default Constructor "<<endl;
}
Show(int num)
{
    cout<<"I Have Num = "<<num<<endl;
}

Show(int a,int b)
{
  cout<<"a = "<<a<<endl;
  cout<<"b = "<<b<<endl;
  int c=a+b;
  cout<<"c = "<<c<<endl;
}
Show(int id,string ename)
{
    cout<<"Hello "<<ename<<", Your employee id is "<<id<<endl;
}
Show(string msg)
{
    cout<<msg<<endl;
}
Show(double f)
{
  cout<<"I Have double f = "<<f<<endl;  
}

};
int main()
{
   Show s1;
   Show s2(1.6);
   Show s3("hello");
   Show s4(101,"Anupma");
    return 0;
}