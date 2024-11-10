

#include <iostream>
#include"InputOutputLib.h"
using namespace std;
using namespace InputLib;

int main()
{


  cout << "Hello World!\n";

  //cout << CheckNumber(ReadNumber()) << endl;

  (ReadNumber() > 0) ? cout << "The Number Positif\n " : cout << "The Number Necatif..\n";

  int Number = ReadNumber();
  (Number > 0) ? cout << "The Number Positif \n" : (Number < 0) ? cout << "The Number Necatif. \n" : cout <<"The Number is  zero. -)\n";
  return 0;
}

