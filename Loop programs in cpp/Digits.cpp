#include<iostream>
using namespace std;
class Digits
{
    int ch,originalNum,count=0,rem,sum=0;
public:long long int num;
   Digits()
   {
    cout<<"Enter Number ";
    cin>>num;
    originalNum=num;
   }
   int options()
   {
       cout<<"Press 1 to find number of digits "<<endl;
       cout<<"Press 2 to find sum of digits "<<endl;
       cout<<"Press 3 to find reverse of a number "<<endl;
       cout<<"Enter Your Choice = ";
       cin>>ch;
       return ch;
   }

   void countDigits()
   {
       num=originalNum;
       while(num != 0)
       {
           num=num/10; 
           //5439 num=5439/10; means num=543  and count=1
           //543 num=543/10; means num=54 and count=2
           //54 num=54/10; means num=5 and count=3
           //5 num=5/10 means num=0 and count=4
           count++;
         }

       cout<<"Number of Digits are = "<<count<<endl;
   }

   void sumofDigits()
   {
       num=originalNum;
       while(num != 0)
       {
           rem=num%10;
           //rem=5439%10; rem=9; // rem=543%10; means rem=3 //rem=54%10; means rem=4 //rem=5
           sum=sum+rem; //sum=0+9=9 means sum=9+3 means sum=12 //sum=12+4 means sum=16 // sum=16+5=21
           num=num/10;  //543 means  54    // 5  //0    
           
         }
       cout<<"Sum of Digits are = "<<sum<<endl; //21


   }

void reverseNumber()
{
     num=originalNum;
     cout<<"Reverse Number of "<<num<<" = ";
       while(num != 0)
       {
           rem=num%10;
           cout<<rem;
           num=num/10;            
       }
       

}


};
int main()
{
    
    
    Digits d1;
    int opt=d1.options();
     switch(opt)
     {
         case 1:
         d1.countDigits();         
         break;

         case 2:
         d1.sumofDigits();
         break;

         case 3:
         d1.reverseNumber();
         break;

         default:
         cout<<"Invalid Choice !!";

     }


   

    return 0;
}