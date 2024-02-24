#include <iostream>  
using namespace std;  
template<class X,class Y> void display(X a,Y b)  
{  
    cout << "Value of a is : " <<a<<endl;  
    cout << "Value of b is : " <<b<<endl;  
}  
  
int main()  
{  
   display(15,12.3);  
   
   return 0;  
}  
