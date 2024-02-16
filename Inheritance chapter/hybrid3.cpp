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

class Customer : public Category
{
   public :void showCategory()
   {
       cout<<"Please find categories of Amazon Products: - \n";
       cout<<category<<endl;
   }
};

int main()
{
    Customer v;
    v.login();
    v.findCategoryNum();
    
    v.showCategory();
    
    return 0;
}