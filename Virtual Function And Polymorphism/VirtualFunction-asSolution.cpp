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
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

class Rectangle: public Shape{
   public:Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};
// Main function for the program
int main( )
{
   Shape *shape; //shape is pointer variable of Parent class
   Rectangle rec(10,7); //object of Recatngle
   Triangle  tri(10,5); //Object od Triangle
int res;
   // store the address of Rectangle
   shape = &rec; //assigning child class reference to parent pointer
   // will call parent class area function not  rectangle area.
   res=shape->area(); 
   cout<<"Area of Rectangle by Parent Class Pointer :- "<<res<<endl; 

   // store the address of Triangle
   shape = &tri;
   // will call parent class area function not  call triangle area.
   res=shape->area();
   cout<<"Area of Triangle by Parent Class Pointer :- "<<res<<endl; 

return 0;
}


//Here Polymorphism is when we are creating one function area in three classes in many forms
//but it arrising one problem which is now by this we are not able to call Parent class Pointer to Child class function
//so solution is use virtual keyword with parent class'a area function