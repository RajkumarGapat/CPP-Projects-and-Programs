#include<iostream>
using namespace std;
class Fibonacci
{
  int n,T1,T2,nextTerm,i;
  public:Fibonacci()
  {
     cout<<"Enter the number of terms: ";
     cin>>n;
  }
  void set()
  { 
      T1=0;
      T2=1;
      nextTerm=T1+T2;
  }
  void showSeries()
  {
      cout<<"Fibonacci Series :- \n";
      cout<<T1<<","<<T2<<",";
      for(i=3;i<=n;i++)
      {
          cout<<nextTerm<<",";
         T1=T2;
         T2=nextTerm;
         nextTerm=T1+T2; 
      }
  }

}f1; //calling constrtor

int main()
{
    f1.set();
    f1.showSeries();

    return 0;
}