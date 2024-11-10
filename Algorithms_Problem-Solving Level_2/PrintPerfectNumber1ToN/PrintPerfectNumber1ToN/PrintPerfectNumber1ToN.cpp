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

bool isPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1;i < Number;i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Number == Sum;
}
void PrintResults(int Number)
{
	for (int i = 1;i <= Number;i++)
	{
		if (isPerfectNumber(i))

			cout << i << endl;

	}

}
int main()
{
	PrintResults(ReadPositiveNumber("Please enter Positive Number..?"));
	return 0;
}