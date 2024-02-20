#include<iostream>
using namespace std;
class Apply
{
    int num;
    int a;
    public:Apply()
    {
        cout<<"I am constructor";
        cout<<"Enter Number = ";
        cin>>num;
        a=10;
    }

    void show()
    {
        cout<<"num = "<<num<<endl;
         cout<<"a = "<<a<<endl;
    }
//below will work like prefix increment
   void  operator ++()
    {
        num++;
        a=a+10;
    }
   //below will wok like postfix increment 
    void  operator ++(int) 
    {
        num=num+20;
        a=a+5;
    }
    
    
}a1; //calling constructor
int main()
{
    a1.show();
    cout<<"After Prefix ++ Operator Overloading "<<endl;

    ++a1; //calling operator overloading
    a1.show();

cout<<"After Postfix ++ Operator Overloading "<<endl;
    a1++;
    a1.show();


    return 0;
}
