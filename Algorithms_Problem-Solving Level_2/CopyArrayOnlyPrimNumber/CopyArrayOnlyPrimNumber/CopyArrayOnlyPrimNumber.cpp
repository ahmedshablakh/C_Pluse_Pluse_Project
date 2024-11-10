#include<iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int randomNumber = rand() % (To - From + 1) + From;
	return randomNumber;
}
enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
enPrimNotPrime CheckPrime(int Number)
{ 
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{ if (Number % Counter == 0)
		return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}
void FillArrayWithRandomNumbers(int array[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0;i < arrLength;i++)
	{
		array[i] = RandomNumber(1, 100);
	}
}
void PrintArry(int array[100], int arrlength)
{
	for (int i = 0; i < arrlength;i++)
	{
		cout << array[i]<<"  ";
	}
	cout << endl;
}
void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Lenght)
{
	int Counter = 0;
	for (int i = 0;i < arrLength; i++)
	{
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
		{
			arrDestination[i] = arrSource[i];
			Counter++;
		}
	}
	arr2Lenght = --Counter;
}
int main()
{
	srand((unsigned)time(NULL));
	int array[100], arrLength;
	FillArrayWithRandomNumbers(array, arrLength);
	
	int array2[100], arr2Length = 0;

	CopyOnlyPrimeNumbers(array,array2, arrLength, arr2Length);

	cout << "Orjinal Array \n";

	PrintArry(array, arrLength);

	cout << "Copy Arry Only Prime Number: \n";

	PrintArry(array2, arr2Length);
	return 0;
}