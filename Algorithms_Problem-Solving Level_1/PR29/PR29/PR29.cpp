#include<iostream>
using namespace std;

enum enOddOrEven { Odd = 1, Even = 0 };
int ReadNumber()
{
	int number;
	cout << "Please enter Number?\n";
	cin >> number;
	return number;
}
enOddOrEven CheckOddOrEven(int Number)
{
	if (Number & 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}
int SumEvenNumbersFrom1toN_UsingWhile(int N)
{
	cout << " sum Even numbers using While Statment: \n";
	int conter = 1, sum = 0;
	while (conter <= N)
	{
		if (CheckOddOrEven(conter) == enOddOrEven::Even)
			sum += conter;
		conter++;
	}
	return sum;
}
int SumEvenNumbersFrom1toN_UsingDoWhile(int N)
{
	cout << " Sum Even numbers using Do While Statment: \n";

	int conter = 1, sum = 0;
	do
	{
		if (CheckOddOrEven(conter) == enOddOrEven::Even)
			sum += conter;
		conter++;
	} while (conter <= N);
	return sum;
}
int SumEvenNumbersFrom1toN_UsingFor(int N)
{
	cout << " Sum Even numbers  using For Statment: \n";
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (CheckOddOrEven(i) == enOddOrEven::Even)
			sum += i;
	}
	return sum;
}

int main()
{
	cout << "Write a program to Print Sum Even Number form 1 to Num.. \n";
	int N = ReadNumber();
	cout << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;
	cout << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;
	cout << SumEvenNumbersFrom1toN_UsingFor(N) << endl;
}
