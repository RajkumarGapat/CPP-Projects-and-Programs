// C++ program to illustrate Pointer Arithmetic in C++
#include <bits/stdc++.h>
using namespace std;
void geeks()
{
    //Declare an array
    int v[10] = {10, 100, 200,67,4,9,34,89,12,99};
    
    //declare pointer variable
    int *ptr;
    
    //Assign the address of v[0] to ptr
    ptr = v;
    
    for (int i = 0; i < 10; i++)
    {
           
           
           
            cout << "Value at ptr = " << ptr << "\n";
            cout << "Value at *ptr = " << *ptr << "\n";
            
            // Increment pointer ptr by 1
            ptr++; //airthemtic operator on pointer variable means ptr=ptr+1;
    }
}

//Driver program
int main()
{
    geeks();
    return 0;
}

