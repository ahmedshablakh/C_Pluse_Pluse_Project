#include<iostream>
#include<string>
using namespace std;
void Read_Print()
{
    cout << "Please enter full name " << endl;
    string FullName;
    getline(cin, FullName);
    cout << "The Input Name \t" << FullName << endl;
}

int main()
{
    Read_Print();
}