#include<iostream>
#include<dirent.h>
using namespace std;
int main()
{
    int count=0;
    struct dirent *d; //here d is pointer variable of structure dirent
    DIR *dr;
    dr = opendir(".");
    if(dr!=NULL)
    {
        cout<<"List of Files & Folders:-\n";
        for(d=readdir(dr); d!=NULL; d=readdir(dr))
        {
            count++;
            cout<<d->d_name<<endl;
        }
        cout<<"\n\n Total = "<<count<<endl;
        closedir(dr);
    }
    else
    {
        cout<<"\nError Occurred!";
    }
    cout<<endl;
    return 0;
}
