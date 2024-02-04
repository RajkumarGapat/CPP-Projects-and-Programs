#include<iostream>
using namespace std;
class Result
{
    int mark[10],total=0;
    int subno;
    char na[20];
    int sid;
    public:void setInfo()
    {
        cout<<"Enter Student Name = ";
        cin>>na;
        
        cout<<"Enter Student Id = ";
        cin>>sid;
    }

    void getMarks()
    {
       
       cout<<"Enter Subject no = ";
       cin>>subno;
       for(int i=1;i<=subno;i++)
       {
           cout<<"Enter Marks = ";
           cin>>mark[i];
           total=total+mark[i];
       }
    }
    void showResult()
    {
        float per=total/subno;
        cout<<"Hello "<<na<<", Please Find Your result below:- "<<endl;
        cout<<"Your Id = "<<sid<<endl;
        cout<<"Total Marks = "<<total<<endl;
        cout<<"Percentage = "<<per<<endl;
    }


};

int main()
{
     Result Maneet;
     Maneet.setInfo();
     Maneet.getMarks();
     Maneet.showResult();

     Result Avi;
     Avi.setInfo();
     Avi.getMarks();
     Avi.showResult();

     Result Raj;
     Raj.setInfo();
     Raj.getMarks();
     Raj.showResult();
     
return 0;
}