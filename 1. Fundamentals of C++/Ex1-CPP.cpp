//write a program to find area of circle in c++ programming with procedural coding
#include<iostream>
void main()
{
    int r;
    float ar;
    std::cout<<"Enter Radious of Cricle = ";
    std::cin>>r;
    ar=3.14*r*r;
    std::cout<<"Area of Circle = "<<ar;

}
/*Steps:- 
1. Change header file from stdio.h to iostream
2. using namespace to make less code
3. use cout for output instead of printf() function,here cout is predefied object of iostream class
4. use cin instead of scanf() function for input
*/