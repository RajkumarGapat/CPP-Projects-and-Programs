/* Used Logical Operator  && || ! for multiple conditions 
&& -> tea and snacks
!! -> tea or coffee
! -> opposite of result
*/
#include<iostream>
using namespace std;
int main()
{ 
    int a;
    a=(2<1) || (4<3);    
    cout<<"a = "<<a<<endl; // 0

    a=(2<1) || (4>3);
    cout<<"a = "<<a<<endl; // 1

    a=(2>1) || (4>3);
    cout<<"a = "<<a<<endl; // 1

    a= (5>3) || (8>7) || (23>13) || (9<6) || (54<2);
    cout<<"a = "<<a<<endl; // 1

     return 0;

}