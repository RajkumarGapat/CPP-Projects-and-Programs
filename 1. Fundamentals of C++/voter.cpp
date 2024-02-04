 /* write a program to display status of validity of voter or driving license
 Conditions are below:-
 age>18 means valid for both
 age == 18 valid for both
 age<18 not valid for both

 */


#include<iostream>
using namespace std;
class Valid
{
     int age;
     public: void getAge()
     {
         cout<<"Enter Your Age = ";
         cin>>age;
     }
//here check is return type function who is returning status varible in main funtcion
     int  check()
     {
        int status;
         if( (age>=18))
          { 
              status=1;
          }
          else
          {
              status =0;              
          }

         return status;
     }

};
int main()
{
    Valid maneet;
    maneet.getAge();
    int s=maneet.check();

    cout<<"S = "<<s<<endl;


    return 0;
}