#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);
		return Number;
}
int Factorial(int N)
{
	int F = 1;
	for (int i = 1; i <= N;i++)

	{
		
		F *= i;
	}
	return F;
}

int main()
{
	cout << " Claculate in facturiale...\n";
	cout << "The Factorial is : " << Factorial(ReadPositiveNumber("Please enter Number..? "));
	return 0;
}