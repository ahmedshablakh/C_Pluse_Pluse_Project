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

// CheckOddOrEven
enOddOrEven CheckOddOrEven(int Number)
{
	if (Number & 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}
// Odd function
int SumOddNumbersFrom1toN_UsingWhile(int N)
{
	cout << " sum odd numbers using While Statment: \n";
	int conter = 1, sum = 0;
	while (conter <= N)
	{
		if (CheckOddOrEven(conter) == enOddOrEven::Odd)
			sum += conter;
		conter++;
	}
	return sum;
}
int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
	cout << " Sum odd numbers using Do While Statment: \n";

	int conter = 1, sum = 0;
	do
	{
		if (CheckOddOrEven(conter) == enOddOrEven::Odd)
			sum += conter;
		conter++;
	} while (conter <= N);
	return sum;
}
int SumOddNumbersFrom1toN_UsingFor(int N)
{
	cout << " Sum odd numbers  using For Statment: \n";
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (CheckOddOrEven(i) == enOddOrEven::Odd)
			sum += i;
	}
	return sum;
}
// Even function 

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
// Sum All Number function 
int SumAllNumbersFrom1toN_UsingWhile(int N)
{
	cout << " sum All numbers using While Statment: \n";
	int conter = 1, sum = 0;
	while (conter <= N)
	{
		sum += conter;
		conter++;
	}
	return sum;
}
int SumAllNumbersFrom1toN_UsingDoWhile(int N)
{
	cout << " Sum All numbers using Do While Statment: \n";

	int conter = 1, sum = 0;
	do
	{
		sum += conter;
		conter++;
	} while (conter <= N);
	return sum;
}
int SumAllNumbersFrom1toN_UsingFor(int N)
{
	cout << " Sum All numbers  using For Statment: \n";
	int sum = 0;
	for (int i = 1; i <= N; i++)
	{
			sum += i;
	}
	return sum;
}
void PrintResulte(int N)
{
	cout << "The type of number sum you want All or Odd or  Even  " << endl;
	string type;
	cin >> type;
	if (type == "Even")
	{
		cout << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;
		cout << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;
		cout << SumEvenNumbersFrom1toN_UsingFor(N) << endl;

	}
	else if (type == "Odd")
	{
		cout << SumOddNumbersFrom1toN_UsingWhile(N) << endl;
		cout << SumOddNumbersFrom1toN_UsingDoWhile(N) << endl;
		cout << SumOddNumbersFrom1toN_UsingFor(N) << endl;
	}
	else if (type == "All" or "all")
	{
		cout << SumAllNumbersFrom1toN_UsingWhile(N) << endl;
		cout << SumAllNumbersFrom1toN_UsingDoWhile(N) << endl;
		cout << SumAllNumbersFrom1toN_UsingFor(N) << endl;
	}
	else
		cout << "Error..!\n";
}

int main()
{
	cout << "Write a program to Print Sum Even Number form 1 to Num.. \n";
	 
	PrintResulte(ReadNumber());
	
	
}
