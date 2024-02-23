#include<iostream>
#include <fstream>
using namespace std;
int main()
{
fstream new_file;  //object of fstream class

new_file.open("m3.txt",ios::out);  //calling open function by object

if(!new_file) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file.close(); // Step 4: Closing file
}
return 0;
}
