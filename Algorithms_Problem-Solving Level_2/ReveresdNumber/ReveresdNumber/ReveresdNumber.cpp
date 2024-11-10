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

int ReversNumber(int Number)
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

int main()
{
	cout<<"\n Reverse is : \n " <<  ReversNumber(ReadPositiveNumber("Please enter Positive number ..?"));
	return 0;
}