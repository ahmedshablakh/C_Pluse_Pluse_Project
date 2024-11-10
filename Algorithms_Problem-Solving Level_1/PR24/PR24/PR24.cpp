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
void PrintResult(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << Age << " is a valid age \n";
	else 
		cout << Age << " is Invalid age \n";
}
int main()
{
	cout << "Validate Number \n";
	PrintResult(ReadAge());
}