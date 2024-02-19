#include<iostream>
using namespace std;
class check
{
    int i;
    char ch;
  public:void Counting()
  {
     for(i=1;i<=26;i++)
     {
         cout<<i<<endl;
     }
  }

public:void Alphabets()
  {
     for(ch='A';ch<='Z';ch++)
     {
         cout<<ch<<endl;
     }
  }


};
int main()
{
   check f1;
   
   f1.Alphabets();
    return 0;
}