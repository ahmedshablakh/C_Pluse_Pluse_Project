#include<iostream>

using namespace std;

int PositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);

	return Number;
}

void PrintLatterInvertedPattern(int Number)
{
	for (int i = 65 + Number - 1;i >= 65;i--)
	{
		for (int j = 1; j <= Number - (Number + 65 - 1 - i);j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}
int main()
{
	PrintLatterInvertedPattern(PositiveNumber("Please enter a positive Number"));

}

