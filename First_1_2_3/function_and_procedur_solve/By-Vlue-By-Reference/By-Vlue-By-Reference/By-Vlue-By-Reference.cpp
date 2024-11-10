#include<iostream>
using namespace std;

void Myfunction(int &num1)
{
    num1 = 35;
    cout << "Number inside function became = " << num1 << endl;
  
}

int main()
{
    int num1 = 7500;
    Myfunction(num1);
    cout << "Number after calling the function became = " << num1 << endl;



}


