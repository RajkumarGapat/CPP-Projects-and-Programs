#include<iostream>
using namespace std;
class vehicle
{
   public :int wheels;
};

class car:public vehicle
{
    public: int doors;
    public:void output()
    {
        cout<<wheels;
    }
};

int main()
{
    vehicle v1;
    v1.wheels=4;
    v1.doors=4;

    car c1;
    c1.wheels=4;
    c1.doors=4;

  return 0;
}