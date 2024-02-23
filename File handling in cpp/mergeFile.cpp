#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main()
{
    char fileOne[30], fileTwo[30], fileTarget[30], ch;
    fstream f1, f2, fout;
    cout<<"Enter the Name of First Source File: ";
    gets(fileOne);
    cout<<"Enter the Name of Second Source File: ";
    gets(fileTwo);

    f1.open(fileOne, fstream::in);
    f2.open(fileTwo, fstream::in);
    if((!f1) || (!f2))
    {
        cout<<"\nError Occurred (First Source File)!";
        return 0;
    }
    else
    {
        cout<<"\nEnter the Name of Target File: ";
        gets(fileTarget);
        fout.open(fileTarget, fstream::out);
        if(!fout)
        {
            cout<<"\nError Occurred (Target File)!";
        }
        else
        {
          
            while(f1>>noskipws>>ch)
            {
                //cout<<ch; //it will print in console screen 
                fout<<ch; //it will print in file
            }
            fout<<"\n ************************************** \n";
            while(f2>>noskipws>>ch)
            {
                fout<<ch;
            }
            cout<<"\nContent of Two File Merged Successfully into Third!";
        }
    }
    f1.close();
    f2.close();
    fout.close();
    cout<<endl;
    return 0;
}
