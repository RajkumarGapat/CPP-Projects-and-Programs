#include <iostream>
using namespace std;

class B; //forward declaration.
class A
{
    int x;
    public:
         void setdata (int i)
           {
              x=i;
           }
    friend void max (A, B); //friend function.
} ;
class B
{
     int y;
     public:
          void setdata (int i)
            {
               y=i;
            }
     friend void max (A, B);
};
void max (A a, B b)
{
   if (a.x >= b.y)
   {
         cout<< a.x <<endl;
   }
   else
   {
         cout<< b.y <<endl;
   }
}
  int main ()
{
   A ob1;
   B ob2;
    ob1. setdata (10); // value of x of Class A
    ob2. setdata (20); // value of y of Class B
    max (ob1, ob2);
    return 0;
}
