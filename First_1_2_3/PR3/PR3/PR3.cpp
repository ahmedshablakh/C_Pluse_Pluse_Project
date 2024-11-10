#include <iostream>
using namespace std;
int main()
{
	string  Name ,
		City,
		Country;
	short  Age,
		Monthly_Salary;
	char Gender;
	bool Married;

	cout << "Plese enter Your Name" <<endl ;
	cin >> Name;
		
	cout << "Please enter Your City" << endl;
	cin >> City;

	cout << "Please enter Your Country " << endl;
	cin >> Country;
				   
	cout << "Please enter Your Age " << endl;
	cin >> Age;	   
	cout << "Please enter Your Monthly_Salary " << endl;
	cin >> Monthly_Salary;
	cout << "Please enter Your Gender " << endl;
	cin >> Gender;
	cout << "Please enter Your Married " << endl;
	cin >> Married;

	cout << "*******************************" << "\n" <<
		"Name :\t " << Name << "\n"
		"Age :\t " << Age << "\n"
		"City :\t " << City << "\n"
		"Country :\t " << Country << "\n"
		"Monthly Salary :\t " << Monthly_Salary << "\n"
		"Yearly Salary :\t " << Monthly_Salary * 12 << "\n"
		"Gender :\t " << Gender << "\n"
		"Married :\t" << Married << "\n"
		"*******************************\n\n\n";
	int a, b;
	cout << "Please Enter Two Number"<< endl;
	cin >> a;
	cin >> b;
	cout << "Number1 = " << a << endl;
	cout << "Number2 = " << b << endl;
	cout << "Number1 and Number2 the Total = " << a+b <<"..." << endl;

	int age;
	cout << "Please enter Your Age \n";
	cin >> age;
	cout << "After 5 Years you will be " << age +5 << " years old..\n";




}