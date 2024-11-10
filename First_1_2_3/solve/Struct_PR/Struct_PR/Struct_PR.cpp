
#include <iostream>
#include<string>
using namespace std;

struct stAddress
{
	string Cit,
		Country;
};
struct stSalary
{
	float Monthly_Salary;
};
struct stOwner
{
	string Name;
	char Gender;
	bool Married;
	short  Age;
	stAddress Address;
	stSalary Salary;
	
};




int main()
{
	stOwner Full_data;

	cout << "Plese enter Your Name" << endl;
	getline(cin,Full_data.Name);

	cout << "Please enter Your City" << endl;
	cin >> Full_data.Address.Cit;

	cout << "Please enter Your Country " << endl;
	cin >> Full_data.Address.Country;

	cout << "Please enter Your Age " << endl;
	cin >> Full_data.Age;
	cout << "Please enter Your Monthly_Salary " << endl;
	cin >> Full_data.Salary.Monthly_Salary;
	cout << "Please enter Your Gender " << endl;
	cin >> Full_data.Gender;
	cout << "Please enter Your Married " << endl;
	cin >> Full_data.Married;

	cout << "*******************************" << "\n" <<
		"Name :\t " << Full_data.Name << "\n"
		"Age :\t " << Full_data.Age << "\n"
		"City :\t " << Full_data.Address.Cit << "\n"
		"Country :\t " << Full_data.Address.Country << "\n"
		"Monthly Salary :\t " << Full_data.Salary.Monthly_Salary << "\n"
		"Yearly Salary :\t " << Full_data.Salary.Monthly_Salary * 12 << "\n"
		"Gender :\t " << Full_data.Gender << "\n"
		"Married :\t" << Full_data.Married << "\n"
		"*******************************\n\n\n";





}