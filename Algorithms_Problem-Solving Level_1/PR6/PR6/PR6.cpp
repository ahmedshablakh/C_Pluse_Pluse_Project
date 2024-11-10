#include<iostream>
using namespace std;
struct stInfo
{
	string FirstName;
	string LastName;
	bool Reversed;
};
stInfo ReadInfo() 
{
	stInfo Info;
	cout << "Please enter your First Name..\n";
	cin >> Info.FirstName;
	cout << "Please enter your Last Name..\n";
	cin >> Info.LastName;
	cout << "The Name is En enter  1 Otherwise enter 0 ..\n";
	cin >> Info.Reversed;
	return Info;
}
string GetFullName(stInfo Info)
{
	string FullName;
	if(Info.Reversed)
	{
		FullName = "Your Full Name is  " + Info.LastName + "  " +Info.FirstName + " ..\n";
	}
	else
	{
		FullName = "Your Full Name is " + Info.FirstName + " " + Info.LastName + " ..\n";
	}
	return FullName;
}
void PrintInfo(string FullName)
{
	cout << FullName;
}
int main()
{
	PrintInfo(GetFullName(ReadInfo()));
}