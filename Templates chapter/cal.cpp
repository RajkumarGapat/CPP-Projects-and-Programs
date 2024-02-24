#include<iostream>
using namespace std;
template <class T>
class calci
{

public:T a,b;

public: calci(T n1,T n2)
{
     cout<<"Let's initilize member variable a and b by constructor  \n ";
    a=n1;
    b=n2;
}

void get()
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

void add()
{
    T sum = a+b;
    cout<<"Addition of "<<a<<" and "<<b<<" = "<<sum<<endl;
}

void subtraction()
{
    T sub = a-b;
    cout<<"Subtraction of "<<a<<" and "<<b<<" = "<<sub<<endl;
}
void multi()
{
    T mult=a*b;
    cout<<"Multiplication of "<<a<<" and "<<b<<" = "<<mult<<endl;
}
void div()
{
    T d=a / b;
    cout<<"Division of "<<a<<" and "<<b<<" = "<<d<<endl;
}

void call()
{
       get();
       add();
       subtraction();
       multi();
       div();

}

};

int main()
{
    calci <int>c1(5,2); //object creating and duplicate memory created by constructor    
    c1.call();

    calci <float>c2(22.5,6.7); //object creating and duplicate memory created by constructor    
    c2.call();


    return 0;
}