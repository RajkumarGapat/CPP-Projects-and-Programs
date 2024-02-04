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

     void check()
     {
         //1. code - if else if - Ladder Code
          if(age>18)
          {
              cout<<"Yes Valid for Voter card and Driving License"<<endl;
          }
          else if(age==18)
          {
               cout<<"Yes Valid for Voter card and Driving License";

          }
          else{
              cout<<"Not Valid for both !!"<<endl;
          }

          //2. code-  Only if -else

          if( (age>18) || (age==18))
          {
              cout<<"Yes Valid for Voter card and Driving License"<<endl;
          }
          else
          {
              cout<<"Not Valid for both !!"<<endl;
          }
    // 3 Code
    if( (age>=18))
          {
              cout<<"Yes Valid for Voter card and Driving License"<<endl;
          }
          else
          {
              cout<<"Not Valid for both !!"<<endl;
          }
         
     }

};
int main()
{
    Valid maneet;
    maneet.getAge();
    maneet.check();


    return 0;
}