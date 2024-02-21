/* Here Binding means when you are calling any class member by object or pointer 
//here compiler will guide machine to call that member by binding
Two types of Binding here :-
1. Early Binding or Static Binding or Compile Time Binding
2. Later Binding or Dynamic Binding or Run time Binding
*/


#include<iostream> 
using namespace std;
 
class Shape
 {
   protected: int width, height;
   public: Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()
      {
         cout << "Parent class area function:" <<endl;
         return 0;
      }
};

class recatngle : public Shape{
    public: int area()
    {
        cout << "Child class area function:" <<endl;
         return 0;
    }

};

int main()
{
    Shape *s;
    Shape s1;
    int res=s1.area(); //so this is called binding

    //in above  line , Compiler is working on Early Binding or Static Binding or Compile Time Binding
    recatngle rec;
 s=&rec;
 res= s->area(); //it will call child class area as parent as virtaul keyword
 //so here is Later Binding or Dynamic Binding or Run time Binding


    return 0;
}