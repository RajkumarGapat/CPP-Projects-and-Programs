#include<iostream>
using namespace std;
class Cube
{
    public:int num;
    int i;
    public:Cube()
    {
    cout<<"Enter a Positive number = ";
    cin>>num;
    }
     void showCube()
  {
      
    for(i=1;i<=num;i++)
    {
        cout<<"cube of "<<i<<" = "<<(i*i*i)<<endl;
    }
     
   }
   
};
int main()
{
    Cube ob;
    ob.showCube();

    return 0;
}