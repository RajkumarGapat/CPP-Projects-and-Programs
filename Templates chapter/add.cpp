#include<iostream>
using namespace std;
class demo
{
   int a,b;
   public:void input(int x,int y)
   {
     a=x;
     b=y;
   }
   void show()
   {
     cout<<"a="<<a<<endl;
     cout<<"b="<<b<<endl;
   }
demo add(demo c)    //// we are creating object as argument so we wiil have to create class demo object as parameter and we need demo type value so we will create demo add function.
{
demo temp;// as we need class type object return value
temp.a=a+c.a;  // here a is d1 a as d1 called add function and c.a is d2 a as we have passed d2 as parameter
temp.b=b+c.b;//here  b is d1 b as d1 called add function and c.b is d2 b as we have passed d2 as parameter
return (temp);
}

demo minus(demo c)    //// we are creating object as argument so we wiil have to create class demo object as parameter and we need demo type value so we will create demo add function.
{
demo tem;// as we need class type object return value
tem.a=a-c.a;  // here a is d1 a as d1 called add function and c.a is d2 a as we have passed d2 as parameter
tem.b=b-c.b;//here  b is d1 b as d1 called add function and c.b is d2 b as we have passed d2 as parameter
return (tem);
}

};
////////////=============
int main()
{

demo d1;
demo d2;
demo d3;
d1.input(10,100);
d2.input(20,200);
cout<<endl<<endl;

//d3=d1+d2;//Illegal Structure operation error

d3=d1.add(d2);   // we are using other method here d1 is calling add function and d2 is passed as function parameter and   add function return value is assign to d3.

d3.show(); // 30 300

d1.input(10,10);
d2.input(20,200);
d3=d2.minus(d1);
d3.show(); //10 190
return 0;

}
