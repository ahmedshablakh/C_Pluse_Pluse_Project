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

void PrintInvertedNumberPattern(int Number)
{
	/*
	for (int i = 1;i <= Number;Number--)
	{
		for (int j = 1;j <= Number;j++)
		{
			cout << Number;
		}
		cout << endl;
	}
	*/
	for (int i = Number;i >= 1; i--)
	{
		for (int j = 1;j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}
}
int main()
{
	PrintInvertedNumberPattern(ReadPositiveNumber("Please enter number..?"));
	return 0;
}