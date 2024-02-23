#include <iostream>
#include <fstream>
using namespace std;
 
int main()
{
    string line,sourceFile,targetFile;
    //For writing text file
    //Creating ofstream & ifstream class object
    cout<<"Enter the Name of Source File: ";
    cin>>sourceFile;
     cout<<"\nEnter the Name of Target File: ";
    cin>>targetFile;
    /*ifstream ini_file {"original.txt"};
    ofstream out_file {"copy.txt"};*/

    ifstream ini_file(sourceFile); //creating object ini_file of ifstream class
    ofstream out_file(targetFile); //creating object out_file of ofstream class

 
    if(ini_file && out_file)
    {
 
        while(getline(ini_file,line))
        {
            out_file << line << "\n"; //writing in target file
        }
 
        cout << "Copy Finished \n";
 
    } else
     {
        //Something went wrong
        printf("Cannot read File");
    }
 
    //Closing file
    ini_file.close();
    out_file.close();
 
    return 0;
}
