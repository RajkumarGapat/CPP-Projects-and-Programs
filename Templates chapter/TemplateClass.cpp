#include <iostream>  
using namespace std;  
template<class T>  
class A   
{  
    public:  
    T num1 = 5;  
    T num2 = 6;  
    void add()  
    {  
        cout << "Addition of num1 and num2 : " << num1+num2<<endl;  
    }  
      
};  
  
int main()  
{  
    A<int> d;  //creating int type object of Template Class
    d.add();  
    A<float> f;  //creating float type object of Template Class
    f.add();  
    return 0;  
}  
