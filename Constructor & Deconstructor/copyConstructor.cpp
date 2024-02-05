#include<iostream>
using namespace std;
class student
{
    public: int x,y;

    public:student()
    {
       cout<<"Enter Two numbers = ";
       cin>>x>>y;
    }

    public:void show()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
};

int main()
{
    cout<<"Raj Object is working --- \n";
    student raj; //this line will initilize x y variables by calling default constructor
    raj.show();

cout<<"Meghraj Object is working --- \n";
    student meghraj=raj; //calling copy constructor
    meghraj.show();


cout<<"Avi Object is working --- \n";

    student avi=raj; //copy constructor , it will copy x and y values of Raj object and paste in x,y of avi object
    avi.show();
    
    return 0;
}

