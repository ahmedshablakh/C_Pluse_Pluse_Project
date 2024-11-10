#include<iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
enum enPrimeNotPrime { Prime = 1, NotPrime = 0 };
enPrimeNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int Conter = 2;Conter <= M;Conter++)
	{
		if (Number % Conter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
void PrintPrimeNumbersFrom1ToN(int Number)
{
	cout << endl;
	cout << "Prime Numbers From << " << 1 << " To " << Number << " are : " << endl;
	for (int i = 1;i <= Number;i++)
	{
		if (CheckPrime(i) == enPrimeNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}

int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ? ")); 
	return 0;
}