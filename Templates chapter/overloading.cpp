#include<iostream>
using namespace std;
template <class S>
void user(S id)
{
    cout<<"Good Morning Student your examination rollno is #"<<id<<endl;
}
template <class E,class K>
void user(E id,K perc)
{
    cout<<"Good Morning Student , Your Student id is #"<<id<<endl;
    cout<<"Your Result is "<<perc<<" % "<<endl;
}
template <class em,class sa,class p>
void user(em Email, sa Salary,p PF)
{
    cout<<"Employee Your Email id = "<<Email<<endl;
    cout<<"Employee your salary is = "<<Salary<<endl;
    cout<<"Employee your PF of salary is = "<<PF<<" % "<<endl;
}
int main()
{
user("anupma.web@gmail.com",40000,6.2);
user(1013);
user(345,98.3);

    return 0;
}