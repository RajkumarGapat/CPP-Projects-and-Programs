//write a program to display table of number
#include<iostream>
using namespace std;

class Table
{
     public: int num;
    public:Table()
    {
            cout<<"Enter Number = ";
            cin>>num;           
    }
   
   public:friend void showTable();

};

void showTable(int n)
{
    int res;
    for(int i=1; i<=10;i++)
    {
        res=n*i;
        cout<<n<<" * "<<i<<" = "<<res<<endl;        
    } 
}


int main()
{
    Table tab;
    showTable(tab.num);

    return 0;
}