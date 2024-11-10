#include<iostream>
using namespace std;

//Building Blocks 
int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
}

void AddArrayElement(int Number, int array2[100], int& ArrLength)
{
	ArrLength++;
	array2[ArrLength -1] = Number;
	
}
int RandomNumber(int From, int To)
{
	int randNumber = rand() % (To - From + 1) + From;
	return randNumber;
}
void FillArrayWithRandomNUmbers(int Array[100], int& arrlength)
{
	arrlength = ReadPositiveNumber("Please enter length array?");
	for (int i = 0;i < arrlength;i++)
	{
		Array[i] = RandomNumber(1, 100);
	}
}
void PrintArry(int array[100], int arrlength)
{
	for (int i = 0; i < arrlength;i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
}
void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0;i < arrLength;i++)
	{
		AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int Array[100], ArrLength = 0;
	int Array2[100], Arr2Length = 0;
	FillArrayWithRandomNUmbers(Array, ArrLength);

	cout << "Orjinal Array Elements : \n";
	PrintArry(Array, ArrLength);
	CopyArrayUsingAddArrayElement(Array, Array2, ArrLength, Arr2Length);
	cout << "Copy Array Elements : \n";
	PrintArry(Array2, Arr2Length);
}

