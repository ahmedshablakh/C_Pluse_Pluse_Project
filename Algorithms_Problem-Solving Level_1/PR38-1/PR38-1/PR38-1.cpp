#include<iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };


enPrimeNotPrime CheckPrime(int Number)
{
	if (Number <= 2)
		return enPrimeNotPrime::Prime;

	for (int Conter = 2;Conter <= Number -1; Conter++)
	{
		if (Number % Conter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}
void PrintNumberType(int Number)
{
	switch (CheckPrime(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "The number is Prime \n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout << "The number is not Prime \n";
		break;
	}
}
int main()
{
	PrintNumberType(ReadPositiveNumber("Please enter a positive Number "));
}