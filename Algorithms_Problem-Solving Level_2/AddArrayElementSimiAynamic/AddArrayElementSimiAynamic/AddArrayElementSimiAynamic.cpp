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
void AddArrayElement(int array[100], int& ArrLength, int Number)
{
	array[ArrLength] = Number;
	ArrLength++;
}

void InputUserNumberInArray(int array[100], int& ArrLength)
{
	bool AddMore = true;

	do
	{
		AddArrayElement(array, ArrLength, ReadPositiveNumber("Please enter a Number..?"));
		AddMore = ReadPositiveNumber("\nDo You want to add more Numbers? [0]:No,[1]:Yes?");

	} while (AddMore);
	
}
void PrintArry(int array[100], int arrlength)
{
	for (int i = 0; i < arrlength;i++)
	{
		cout << array[i] << "  ";
	}
	cout << endl;
}

int main()
{
	int Array[100], ArrLength = 0;
	InputUserNumberInArray(Array, ArrLength);
	cout << "Array Length :" << ArrLength << endl;
	cout << "Array Elements : ";
	PrintArry(Array, ArrLength);
}

