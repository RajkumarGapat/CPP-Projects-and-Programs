#include<iostream>
using namespace std;
template <class M>
void tab(M n)
{
    M res;
    for(M i=1;i<=10;i++)
    {
         res=n*i;
         cout<<n<<" * "<<i<<" = "<<res<<endl;

    }
}

int main()
{
     tab(8);
     tab(1.2);
     tab(7.888);
     tab(10);
    return 0;
}