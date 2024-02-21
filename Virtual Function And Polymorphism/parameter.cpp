#include<iostream>
using namespace std;
void add()
{
    int a=10,b=20;
    int sum=a+b;
    cout<<"Sum = "<<sum<<endl;

}

void add1(int a,int b)
{
     int sum=a+b;
    cout<<"Sum = "<<sum<<endl;
}

void add2(int a=0,int b=0)
{
     int sum=a+b;
    cout<<"Sum = "<<sum<<endl;
}
int main()
{
add();

add1(5,6);//

add2(9,8);
add2(); //it will use 0 in a and b
    return 0;
}

