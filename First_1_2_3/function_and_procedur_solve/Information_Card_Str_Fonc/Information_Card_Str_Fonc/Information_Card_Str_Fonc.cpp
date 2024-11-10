#include<iostream>
#include<string>
using namespace std;

struct Info_Card
{
	    string  Name,
				City,
				Country;
		short  Age,
			Monthly_Salary;
		char Gender;
		bool Married;
};
void ReadInfo(Info_Card &Info)
{
	cout << "Plese enter Your Name" << endl;
	cin.ignore(1, '\n');
	getline(cin,Info.Name);


	cout << "Please enter Your City" << endl;
	cin >> Info.City;

	cout << "Please enter Your Country " << endl;
	cin >> Info.Country;

	cout << "Please enter Your Age " << endl;
	cin >> Info.Age;
	cout << "Please enter Your Monthly_Salary " << endl;
	cin >> Info.Monthly_Salary;
	cout << "Please enter Your Gender " << endl;
	cin >> Info.Gender;
	cout << "Please enter Your Married " << endl;
	cin >> Info.Married;
}
void PrintInfo(Info_Card Info)
{
	cout << "*******************************" << "\n" <<
		"Name :\t " << Info.Name << "\n"
		"Age :\t " << Info.Age << "\n"
		"City :\t " << Info.City << "\n"
		"Country :\t " << Info.Country << "\n"
		"Monthly Salary :\t " << Info.Monthly_Salary << "\n"
		"Yearly Salary :\t " << Info.Monthly_Salary * 12 << "\n"
		"Gender :\t " << Info.Gender << "\n"
		"Married :\t" << Info.Married << "\n"
		"*******************************\n\n\n";
}

int main()
{
	Info_Card Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);

	Info_Card Person2Info;
	ReadInfo(Person2Info);
	PrintInfo(Person2Info);

	Info_Card Person3Info;
	ReadInfo(Person3Info);
	PrintInfo(Person3Info);

	return 0;

}