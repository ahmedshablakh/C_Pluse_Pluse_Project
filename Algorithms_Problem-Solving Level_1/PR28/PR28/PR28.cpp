#include<iostream>
using namespace std;

int ReadNumber()
{
	int number;
	cout << "Please enter Number?\n";
	cin >> number;
	return number;
}
void PrintRangeFrom1toN_UsingWhile(int N)
{
	cout << " Range printed using While Statment: \n";
	int conter = 1, sum = 0;
	while (conter <= N)
	{
		if (conter % 2 != 0)
			sum += conter;
		conter++;
	}cout << sum << endl;
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	cout << " Range printed using Do While Statment: \n";

	int conter = 1,sum = 0;
	do
	{
		if (conter % 2 != 0)
			sum += conter;
		conter++;
	} while (conter <= N);
	cout << sum << endl;
}
void PrintRangeFrom1toN_UsingFor(int N)
{
	cout << " Range printed using For Statment: \n";
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i % 2 != 0)
			sum += i;
	}
	cout << sum << endl;
}

int main()
{
	cout << "Write a program to Print sum Odd Number form 1 to N .. \n";
	int N = ReadNumber();
	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingFor(N);
}
