#include<iostream>
using namespace std;

int ReadAge()
{
	cout << "Please enter is Age" << endl;
	int Age;
	cin >> Age;
	return Age;
}
bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
	int Age = 0;
	do 
	{
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));
	return Age;
}
void PrintResult(int Age)
{
	cout << " Your Age is:  " << Age << endl;
}
int main()
{
	cout << "Validate Number for while loop \n";
	PrintResult(ReadUntilAgeBetween(18,45));
}