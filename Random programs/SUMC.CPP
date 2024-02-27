#include<iostream.h>
#include<conio.h>
class Almira
{
  int a,b,sum; //local member variables of class Almira
 public:  void input()
   {
      cout<<"Enter First Number ";
      cin>>a;
      cout<<"Enter Second Number ";
      cin>>b;
  }
   void logic()
   {
     sum=a+b;
   } 
  void output()
  {
  cout<<"\n a = "<<a;
  cout<<"\n b= "<<b;
  cout<<"\n Sum = "<<sum;
  }

}meghraj; 
void main()
{
  clrscr();  
  Almira raj; //raj is object of class Almira
  raj.input();
  raj.logic();
  raj.output();

  meghraj.input();
  meghraj.logic();
  meghraj.output();

 

  getch();

}