#include<iostream>
using namespace std;
class demo
{
  public: int count,a,b,c,d;
  demo(int n)
  {
     count = n;
     a=5;
     b=20;
     c=9;
     d=2;
  }

  void show()
  {
      cout<<"Count = "<<count<<endl;
      cout<<"a = "<<a<<endl;
      cout<<"b = "<<b<<endl;
      cout<<"c = "<<c<<endl;
      cout<<"d = "<<d<<endl;
  }

  public: void  operator ++()
  {
      count=count+20;
      a=a+6;
      b=b+10;
      c=c+3;
      d=d+15;
  }
 public: void operator --()
  {
      count=count-5;
      a=count-6;
      b=b-2;
      c=c-3;
      d=d-7;
  }
};

int main()
{
    demo d1(56);
    
++d1;
++d1;
++d1;
d1.show();

--d1;
d1.show();

--d1;
--d1;
d1.show();


    return 0;
}