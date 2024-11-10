#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

struct Employees
{
	string FirstName;
	string LastName;
	int Salary;
};
void ReadData(vector <Employees>& Adds)
{
	Employees data;
	char ReadMore = 'Y';
	while (ReadMore == 'Y' || ReadMore == 'y')
	{
		cout << "Please Enter employees data \n";
		cout << "Please enter First name : ";
		cin >> data.FirstName;
		cout << "Please enter Last name : ";
		cin >> data.LastName;
		cout << "Please enter Salary : ";
		cin >> data.Salary;
		Adds.push_back(data);
		cout << "Do you want to enter another employee's information? Y or N" << endl;
		cin >> ReadMore;
	}
}
void PrintData(vector <Employees>& Adds)
{

	    cout << left << setw(4) << "#" << setw(12) << "FirstName" << setw(15) << "LastName" << setw(9) << "Salary" << "|" << endl;
	
	int i = 1;
	for (Employees data : Adds)
	{
		cout << left << setw(4)  << i << setw(12) << data.FirstName << setw(15) << data.LastName << setw(9) << data.Salary << "|" << endl;
		i++;
	}
}
int main()
{
	vector <Employees> Adds;
	ReadData(Adds);
	PrintData(Adds);

	return 0;
}