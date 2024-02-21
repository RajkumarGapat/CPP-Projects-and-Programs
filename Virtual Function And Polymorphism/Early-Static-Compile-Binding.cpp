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
       int area()
      {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

int main()
{
    Shape s1;
    int res=s1.area(); //so this is called binding

    //in above  line , Compiler is working on Early Binding or Static Binding or Compile Time Binding
    return 0;
}