#include<iostream>
using namespace std;
void FillArray(int Arr[100], int& arrLength)
{
	//Hard Coding
	arrLength = 6;
	Arr[0] = 10;
	Arr[1] = 20;
	Arr[2] = 30;
	Arr[3] = 30;
	Arr[4] = 20;
	Arr[5] = 10;


}
void PrintArray(int Arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
	{
		cout << Arr[i] << " ";
	}
}
bool IsArrayPalindrome(int Arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
	{
		if (Arr[i] != Arr[arrLength - i - 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{

	int arrSource[100], SourceLength = 0;
	FillArray(arrSource, SourceLength);
	cout << "\nArray 1 Elements" << endl;
	PrintArray(arrSource, SourceLength);
	if (IsArrayPalindrome(arrSource, SourceLength))
	{
		cout << "\nyes , is Array Palandrome.." << endl;
	}
	else
	{
		cout << "\nNo , is Array Not Palandrome.." << endl;
	}
	return 0;
}