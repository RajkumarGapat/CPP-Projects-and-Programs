
#include<iostream>
 #include <windows.h>  
#include <stdlib.h>

using namespace std;
class WebTech
{
    char na[20];
   int eid;
   int salary;
   int grossSalary;
   int exp;
   int Hcard; //e.g HospitalCard
   float PF; //PF
   float TA;
   int SL,CL;
   float HR;
   int flag;
   public:void Head()
   {
       cout<<"\n\n \t\t\t ********************* WEB TECH - EMPLOYEE MANAGEMENT SYSTEM  ********************* \n\n "<<endl;
   }
   public:void Footer()
   {
       cout<<"\n\n \t\t\t ********************* Copyrights@WEBTECH  ********************* \n\n "<<endl;
   }
public:void setInfo()
{
    cout<<"Enter Employee Id = ";
    cin>>eid;
    cout<<"Enter Employee Name = ";
    cin>>na;
    cout<<"Enter Experiecne = ";
    cin>>exp;
    cout<<"Enter Basic Salary of Employee = ";
    cin>>salary;
}
//Let's Calculate status of Employee
public:void CalculateExp()
{

    if(exp==0)
    {
        cout<<"Fresher Code will be here \n";        
        flag=1;
    }
    else if( (exp>0)  && (exp<=2))
    {
        cout<<"2 Years experiecne Code will be here \n";
        flag=2;
    }
    else if( (exp>2) && (exp<=5) )
    {
        cout<<"5 Years experiecne Code will be here \n";
        flag=3;
    }
}
//Let's calculate Extra Salary Services here 
void Services()
{
        /* write a program to show Company Facilities of employee according to below condtions:-
1. Experience year <2 - HospitalCard, 10% of PF, 12 % Travelallownce,5 % HR, 10 SL,5 HL
2. Fresher  = ConfirmationLetter, 5% PF,Salary, 8% Travel Allowence,  5 Sick Leaves, 3 half leaves 
3. Experience year <5 - HospitalCard 20% Pf, 18 %TA, 15 % HR , 15 Sl,10 HL ,Permotion Year
Extra Salary Services:-
0 --HospitalCard = 2000, 
*/
    switch(flag)
    {
        case 1:
        //fresher
        Hcard=5000; //amount
        SL=5;
        CL=3;
        HR=0;
        PF=salary*5/100; //1000
        TA=salary*8/100;  //1600
        cout<<"PF = "<<PF<<endl;
        cout<<"TA = "<<TA<<endl;
        
        break;

        case 2:
        //2 year
        Hcard=10000;
        SL=10;
        CL=5;
        HR=salary*5/100;
        PF=salary*10/100;
        TA=salary*12/100; 
        break;

        case 3:
        //approx 5 year
        Hcard=20000;
        SL=15;
        CL=10;
        HR=salary*15/100;
        PF=salary*20/100;
        TA=salary*18/100; 
        break;

        default:
        cout<<"Stay Connected with WebTech !! \n";
    }
}
  
void GrossSalary()
{
    grossSalary=salary+Hcard+PF+HR+TA;
    cout<<"Gross Slaray = "<<grossSalary<<endl;
    
}

void ShowSalarySlip()
{
    cout<<"\n\n ********************************************************************** \n";
    cout<<"     |  Employee ID =  "<<eid<<"                                           |"<<endl;
    cout<<"     |  Employee Name =  "<<na<<"                                          |"<<endl;
    cout<<"     |  Basic Salary =  "<<salary<<" Rs.                                   |"<<endl;
    cout<<"     |  Hospital Card Amount =  "<<Hcard<<" Rs.                            |"<<endl;
     cout<<"    |  House Rent Allowence =  "<<HR<<" Rs.                               |"<<endl;
    cout<<"     |  Travel Allowence =  "<<TA<<" Rs.                                   |"<<endl;
    cout<<"     |  Profident Fund =  "<<PF<<" Rs.                                     |"<<endl;
    cout<<"     |  Gross Salary =  "<<grossSalary<<" Rs.                              |"<<endl;
    cout<<"     | Services List:-                                                     |"<<endl;
    cout<<"     |Total Sick Leaves = "<<SL<<"                                         |"<<endl;
    cout<<"     |Total Half Sick Leaves = "<<CL<<"                                    |"<<endl;
    cout<<"\n\n ********************************************************************** \n";
}

};
int main()
{
   system("Color 9");
  WebTech e;

  e.Head();
  e.setInfo();
  e.CalculateExp();
  e.Services();
  e.GrossSalary();
  
  e.ShowSalarySlip();
  e.Footer();

    return 0;
}