#include<iostream>
using namespace std;

struct strInfo 
{
	string FirstName;
	string LastName;
	short Age;
	string Phone;
};

int main()
{
	strInfo Persons[2];
	Persons[0].FirstName = "AHMAD ";
	Persons[0].LastName = "Shablakh";
	Persons[0].Age = 22;
	Persons[0].Phone = "5343541611";

	Persons[1].FirstName = "Ali ";
	Persons[1].LastName = "Sabbag";
	Persons[1].Age = 44;
	Persons[1].Phone = "564854451";

	cout << Persons[0].FirstName << Persons[1].FirstName << endl;
}