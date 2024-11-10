
#include <iostream>
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
	short  Age;
	stAddress Address;
	stSalary Salary;

};

enum Gender {Male , Female};
enum Married_status {Single, Married};
enum Color { Read, Green, Yellow, Blue};

int main()

{ 
	Gender Gender_Status;
	Married_status Married_Status;
	stOwner Full_data;
	Color MyColor;
	MyColor = Color::Blue;
	cout << MyColor << endl ;
	cout << "Plese enter Your Name" << endl;
	cin >> Full_data.Name;

	cout << "Please enter Your City" << endl;
	cin >> Full_data.Address.Cit;

	cout << "Please enter Your Country " << endl;
	cin >> Full_data.Address.Country;

	cout << "Please enter Your Age " << endl;
	cin >> Full_data.Age;
	cout << "Please enter Your Monthly_Salary " << endl;
	cin >> Full_data.Salary.Monthly_Salary;

	cout << "*******************************" << "\n" <<
		"Name :\t " << Full_data.Name << "\n"
		"Age :\t " << Full_data.Age << "\n"
		"City :\t " << Full_data.Address.Cit << "\n"
		"Country :\t " << Full_data.Address.Country << "\n"
		"Monthly Salary :\t " << Full_data.Salary.Monthly_Salary << "\n"
		"Yearly Salary :\t " << Full_data.Salary.Monthly_Salary * 12 << "\n"
		"Gender :\t " << Gender::Female << "\n"
		"Married :\t" << Married_status::Single << "\n"
		"*******************************\n\n\n";
}