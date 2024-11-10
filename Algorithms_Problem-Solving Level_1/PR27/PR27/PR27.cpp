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
	while (1 <= N)
	{
		cout << N << endl;
		N--;
	}
}
void PrintRangeFrom1toN_UsingDoWhile(int N)
{
	cout << " Range printed using Do While Statment: \n";

	
	do
	{
		cout << N << endl;
		N--;
	} while (1 <= N);
}
void PrintRangeFrom1toN_UsingFor(int N)
{
	cout << " Range printed using For Statment: \n";
	for (int i = 1; i <= N; N--)
	{
		cout << N << endl;
	}
}

int main()
{
	cout << "Write a program to Print Number form Num to 1.. \n";
	int N = ReadNumber();
	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingFor(N);
}
