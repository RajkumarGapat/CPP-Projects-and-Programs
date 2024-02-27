#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int num,rem;
  cout<<"Enter Your Number ";
  cin>>num;
  rem=num%2;
  if(rem==0)
  {
    cout<<num<<" is Even Number ";
  }
  else
  {
    cout<<num<<" is Odd Number ";
  }

  getch();

}