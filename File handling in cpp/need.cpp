#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"First way to use getline function to take user's value as string \n";
  string user;
  cout<<"Enter Name = ";
  getline(cin,user);
    cout<<"Welcome "<<user;


cout<<"\n\n Second way to use getline function to take user's value as string \n";
char email[50];
cout<<"Enter your email id = ";
cin.getline(email,16);
cout<<"\n Thanks for submitting your email id which is = "<<email<<endl;

return 0;
}