#include<iostream>
using namespace std;

class Cube
{
    public:
    int side;
    Cube(int x)
    {
        side=x;
    }
};

int main()
{
    Cube c1(10); //object creating and calling parameterised constructor
    Cube c2(20);
    Cube c3(30);
    Cube c4(0);
    cout << c1.side;
    cout << c2.side;
    cout << c3.side;
}
