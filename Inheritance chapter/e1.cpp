#include<iostream>
using namespace std;
class Employee{  
 public:float salary=40000;  
}; 
class Programmer : public Employee{  
 public:int bonus=10000;  
 
};
int main()
{  
   Programmer p; 
   cout<<"Programmer salary is:"<<p.salary<<endl;
   cout<<"Bonus of Programmer is:"<<p.bonus<<endl;  
   return 0;
}  