#include<iostream>
using namespace std;
class calci
{
    int a,b,c;
    public:calci()
    {
        cout<<"Hey I am your constructor and doing extra work for your variables :- "<<endl;
        cout<<"Enter two numbers = ";
        cin>>a>>b;
    }

    void add()
    {
        c=a+b;
        cout<<"Sum = "<<c<<endl;

    }

};
int main()
{
    calci c1; //calling constructor and initlizing variables by user's value    
    c1.add();
    return 0;
}
