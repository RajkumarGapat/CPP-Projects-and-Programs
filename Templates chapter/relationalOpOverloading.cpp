#include <iostream>
using namespace std;
class opp
{
private:
int number,a,b;
public:
void get()
{
    
    cout<<"Enter three Value = ";
    cin>>number>>a>>b;   
    
}
void operator <(opp d)
{
    
    if(number<d.number )
    {
      cout<<"True!!  "<<number<<" is smaller than "<<d.number<<endl;
    }
    else
    {
        cout<<"False!!  "<<number<<" is not smaller than "<<d.number<<endl;
    }
   }
void operator >(opp d)
{
    
    if(number>d.number && a>d.a && b>d.b)
    {
      cout<<"True!! yes greater "<<endl;
    }
    else
    {
        cout<<"False!!  is not greater "<<endl;
    }
   }


void operator ==(opp d)
{
    
    if(number==d.number ||  a==d.a || b==d.b)
    {
      cout<<"True!! yes Equal "<<endl;
    }
    else
    {
        cout<<"False!!  is not Equal "<<endl;
    }
   }


 };

int main()
{

opp n1;
opp n2;


n1.get();


n2.get();
cout<<"After checking of only one variable result is below:- \n";
n1<n2; 
cout<<"\n After checking if all three variables will be greater then  result is below:- \n";
n1>n2;
cout<<"After checking if any from three variable is equal then result is below:- \n";
n2==n1;



return 0;
}
