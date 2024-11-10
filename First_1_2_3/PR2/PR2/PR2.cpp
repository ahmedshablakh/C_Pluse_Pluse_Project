#include <iostream>
using namespace std;

int main()
{
	string  Name ="Ahmad Shablakh",
		City ="Homs ",
		Country = "Sirya",
		 yldiz ="********************************";
	short int Age = 22,
		Monthly_Salary = 5000;
	char Gender = 'M';
	bool Married = true;

	cout << yldiz <<"\n"<<
		"Name :\t "<< Name  << "\n"
		"Age :\t " << Age   << "\n"
		"City :\t "<< City  << "\n"
		"Country :\t "<< Country << "\n"
		"Monthly Salary :\t " << Monthly_Salary << "\n"
		"Yearly Salary :\t " << Monthly_Salary *12 << "\n"
		"Gender :\t "<< Gender  << "\n"
		"Married :\t" << Married  << "\n"+
		yldiz;
}