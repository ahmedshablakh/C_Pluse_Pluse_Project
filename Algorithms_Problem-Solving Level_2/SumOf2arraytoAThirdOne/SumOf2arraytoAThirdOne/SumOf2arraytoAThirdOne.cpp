#include<iostream>
using namespace std;
int ReadPositiveNumbe(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number < 0);
	return Number;
}
int RandomNumber(int From, int To)
{
	int randomNumber = rand() % (To - From + 1) + From;
	return randomNumber;
}
void FillArrayWithRandomNumbers(int array[100], int arrLength)
{
	
	for (int i = 0;i < arrLength;i++)
	{
		array[i] = RandomNumber(1, 100);
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
void SumToArray(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}
int main()
{
	
	srand((unsigned)time(NULL));
	int array[100], array2[100], arrLength;
	arrLength = ReadPositiveNumbe("How Many elements?");
	FillArrayWithRandomNumbers(array, arrLength);
	FillArrayWithRandomNumbers(array2, arrLength);



	cout << "Array 1 elements \n";

	PrintArry(array, arrLength);
	int arrSum[100];
	SumToArray(array, array2,arrSum, arrLength);
	cout << "Array 2 elements \n";
	PrintArry(array2, arrLength);
	cout << "Sum Of  array1 and array2 elements\n";
	PrintArry(arrSum, arrLength);
	return 0;
}