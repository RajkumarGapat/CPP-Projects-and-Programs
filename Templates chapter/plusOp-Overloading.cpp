//write a program to show airthmetic operator overloading in c++
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
   /*
Syntax:
returntype classname : operator operatorsymbol()
{

}

   */
demo operator +(demo c)    //// we are creating object as argument so we wiil have to create class demo object as parameter and we need demo type value so we will create demo add function.
{
demo temp;
temp.a=a+c.a;  
temp.b=b+c.b;
return (temp);
}

demo operator -(demo c)    
{
demo tem;
tem.a=a-c.a;  
tem.b=b-c.b;
return (tem);
}

demo operator *(demo ob)
{
     demo t;
     t.a=a*ob.a;
     t.b=b*ob.b;
     return t;

}

demo operator /(demo ob)
{
     demo t;
     t.a=a/ob.a;
     t.b=b/ob.b;
     return t;

}

};
////////////=============
int main()
{

demo d1,d2,d3,d4,d5,d6,d7,d8;

d1.input(10,100);
d2.input(20,200);
d3.input(5,7);
d4.input(9,3);
d6.input(20,55);
d5.input(3,3);
d7.input(90,5);

d8=d4-d2;
d8.show();

d8=d6*d1;
d8.show();

d8=d7+d2;
d8.show();

d8=d2/d1;
d8.show();




return 0;
}
