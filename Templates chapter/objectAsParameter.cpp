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
  public:void set(user ob) //user ob=u2;
    {
         cout<<"parameter ob's a = "<<ob.a<<endl; //100
         cout<<"parameter ob's b = "<<ob.b<<endl; //200
    }

  

};

int main()
{
    user u1; //calling constructor
    u1.show(); //32,78

    user u2;
    u2.show(); //100 200

    user u3,u4,u5;
    


u1.set(u2); // a=100 and b=200
u2.set(u1); // a = 32 b =78
u1.set(u5);

    return 0;
}

