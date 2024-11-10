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
	int conter = 1;
	while (conter <= N)
	{
		cout << conter << endl;
		conter++;
	}
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	cout << " Range printed using Do While Statment: \n";

	int conter = 1;
	do
	{
		cout << conter << endl;
		conter++;
	} while (conter <= N);
}
void PrintRangeFrom1toN_UsingFor(int N)
{
	cout << " Range printed using For Statment: \n";
	for (int i = 1; i <= N; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	cout << "Write a program to Print Number form 1 to Num.. \n";
	int N = ReadNumber();
	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingFor(N);
}
