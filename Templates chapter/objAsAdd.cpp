#include<iostream>
using namespace std;
class user
{
  public:int a,b;
  public:user()
  {
      cout<<"Enter Two numbers = ";
      cin>>a>>b;
  }
  public :void show()
  {
      cout<<"a = "<<a<<endl;
      cout<<"b = "<<b<<endl;
  }
  public:void add(user ob1,user ob2) //user ob1=u1, user ob2=u2;
    {
        user temp; //calling constructor 9 10
        temp.a = ob1.a+ob2.a; //temp.a=20+5; 25
        temp.b=ob1.b+ob2.b; //temp.b=1+4; 5
         cout<<"parameter ob's a = "<<temp.a<<endl; //100
         cout<<"parameter ob's b = "<<temp.b<<endl; //200
    }

  

};

int main()
{
    user u1; //calling constructor
    u1.show(); //20,1

    user u2;
    u2.show(); //5,4

    user u3; //7,8
    u3.add(u1,u2);

    
    return 0;
}

