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

void PrintLatterPattern(int Number)
{
	for (int i = 65; i <= 65 + Number-1;i++)
	{
		for (int j = 1; j <= i - 65 +1 ;j++)
		{
			cout << char(i);
		}
			
		cout << endl;
	}
}
int main()
{
	PrintLatterPattern(PositiveNumber("Please enter a positive Number"));

}

