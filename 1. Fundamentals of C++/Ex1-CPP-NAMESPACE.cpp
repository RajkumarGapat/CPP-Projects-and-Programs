//write a program to find area of circle in c++ programming with procedural coding
#include<iostream>
using namespace std;
int main()
{
    int r;
    float ar;
    cout<<"Enter Radious of Cricle = ";
    cin>>r;
    ar=3.14*r*r;
    cout<<"Area of Circle = "<<ar;


    
    return 0;
}
/*Steps:- 
1. Change header file from stdio.h to iostream
2. using namespace to make less code
3. use cout for output instead of printf() function,here cout is predefied object of iostream class
4. use cin instead of scanf() function for input
*/