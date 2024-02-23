#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    string na="Anupma Narang";
    cout<<"Hello "<<na<<endl;
  char filename[] = "m1.txt";
  //string fname="C:\\sample.txt";

  // remove the file "program.cpp"
  int result = remove("C:\\sample.txt");

  cout << result;

  return 0;
}

