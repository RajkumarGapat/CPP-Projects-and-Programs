#include<iostream>
#include<string.h>
using namespace std;
class Amazon
{
   public: string category;
};

class Admin : public Amazon
{
    public: int pass;
    void login()
    {
        cout<<"Hey administrator, Please give your password :- ";
        cin>>pass;
    }
};
class Category : public Admin
{
    public:int numCname;
       void addCategory()
   {
      string cname;
      for(int i=1; i<=numCname;i++)
      {
      cout<<"Enter Category Name = ";
      cin>>cname;
      cname.append(" ");
       category.append(cname); //this function will add more content in previous content 
      }
   }
   public: void findCategoryNum()
   {
        if(pass==2334)
        {
            cout<<" \t\t \t So Login Sccessfull,  Welcome Administrator go ahead :- \n ";        
       cout<<"Enter No of Categories = ";
       cin>>numCname;
       addCategory();
        }
        else
        {
            cout<<"Sorry Invalid Password , So No access !!"<<endl;
        }
   }

};

class Prime
{
    public:int otp=5678,uotp;
    public: void offers()
    {
         cout<<"\n*********************** Your Benfits of Prime Memberships ********************************* \n";
        cout<<"1. 7 Orders Shipped for free with Prime Deliver \n";
        cout<<"2. 5% Reward Points on Every Order \n";
        cout<<"3. Get Upto 40% off on grocery essentials \n";
    }
    public: void checkPrimeMember()
    {
        cout<<"If you are prime member of amazon then please enter otp number = ";
        cin>>uotp;
        if(otp==uotp)
        {
           offers();
        }
        else{
            cout<<"\n No you are not prime member of Amazon.";
        }
    }
    

};
class Customer : public Category,public Prime
{
   public :void showCategory()
   {
       cout<<"Please find categories of Amazon Products: - \n";
       cout<<category<<endl;
   }
};

int main()
{
    int choice;
    Customer v;
    v.login();
    v.findCategoryNum();
    
    v.showCategory();
    cout<<"\n ***************** Hey Customer , Welcome to Amazon.com ***************************  \n";
    cout<<"You can get some benefits by our Prime membership :-\n";
    cout<<"Press 1 if you are already prime member \n";
    cin>>choice;
    if(choice==1)
    {
       v.checkPrimeMember();  
    }
    
    return 0;
}

/*
Amazon 
Admin
Category, Offers
Customer



*/