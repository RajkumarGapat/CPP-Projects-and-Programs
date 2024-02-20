#include <iostream>

using namespace std;

 
class Distance {
   private:
      int feet;             // 0 to infinite
      int inches;
      int a,b,c,d;
      string name,email;           // 0 to 12
      
   public:
      // required constructors
      Distance() {
         feet = 0;
         inches = 0;
         a=9,b=10,c=20,d=8;
         name="Hello";
         email="hi";
      }
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      friend ostream &operator<<( ostream &output, const Distance &D ) { 
         output << "F : " << D.feet << " I : " << D.inches;
         output<<"a= "<<D.a<<"\n  b = "<<D.b<<" \n c = "<<D.c<<"\n d = "<<D.d;
         output<<"name = "<<D.name<<"\n Email= "<<D.email;
         return output;            
      }

      friend istream &operator>>( istream  &input, Distance &D ) { 
         input >> D.feet >> D.inches>>D.a>>D.b>>D.c>>D.d>>D.name>>D.email;
        
         return input;            
      }
};

int main() {
   Distance D1(11, 10), D2(5, 11), D3;

   cout << "Enter the value of object : " << endl;
   cin >> D3; //calling >> operator overloading
   cout << "First Distance : " << D1 << endl; //calling << operator overloading
   cout << "Second Distance :" << D2 << endl; //calling << operator overloading
   cout << "Third Distance :" << D3 << endl;//calling << operator overloading

   return 0;
}
