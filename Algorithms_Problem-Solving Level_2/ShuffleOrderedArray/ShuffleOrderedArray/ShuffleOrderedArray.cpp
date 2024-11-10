#include<iostream>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandomNumber = rand() % (To - From + 1) + From;
	return RandomNumber;
}
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
void Swap(int& A, int& B)
{
	int Temp;
	Temp = A;
	A = B;
	B = Temp;
}
void FillArrayWith1toN(int array[100], int arrLength)
{
	for (int i = 0;i <= arrLength;i++)
	{
		array[i] = i + 1;
	}
}
void ShuffleArray(int arr[100], int length)
{
	for (int i = 0;i < length;i++)
	{
		Swap(arr[RandomNumber(1, length) - 1], arr[RandomNumber(1, length) - 1]);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	
	cout << "\n";
} 
int main() 
{ 
	//Seeds the random number generator in C++, called only once 
	srand((unsigned)time(NULL));
	int arr[100];
	int arrLength = ReadPositiveNumber("\nEnter number of elements : \n");
	FillArrayWith1toN(arr, arrLength);
	cout << "\nArray elements before shuffle:\n";
	PrintArray(arr, arrLength);
	ShuffleArray(arr, arrLength);
	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrLength);
	return 0;
} 