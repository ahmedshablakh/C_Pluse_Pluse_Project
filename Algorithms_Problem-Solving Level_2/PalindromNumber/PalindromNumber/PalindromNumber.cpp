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
int ReveresNumber(int Number)
{
	int Remainder = 0,
		Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}

bool IsPalindromeNumber(int Number)
{
	return Number == ReveresNumber(Number);
}

int main()
{

	if (IsPalindromeNumber(ReadPositiveNumber("Please enter thr main number.?")))
	{
		cout << "\n Yes , it is a Palindrome number. \n";
	}
	else
	{
		cout << "\n No , it is Not a Palindrome number. \n";
	}
	return 0;
}