#include<iostream>
using namespace std;
void FillArray(int Arr[100],int& arrLength)
{
	//Hard Coding
	arrLength = 15;
	Arr[0] = 10;
	Arr[1] = 10;
	Arr[2] = 10;
	Arr[3] = 50;
	Arr[4] = 50;
	Arr[5] = 50;
	Arr[6] = 70;
	Arr[7] = 70;
	Arr[8] = 70;
	Arr[9] = 90;
	Arr[10] = 100;
	Arr[11] = 110;
	Arr[12] = 110;
	Arr[13] = 150;
	Arr[14] = 150;

}
void PrintArray(int Arr[100], int arrLength) 
{
	for (int i = 0;i < arrLength;i++)
	{
		cout << Arr[i] << " ";
	}
}
short FindNumberPositionInArray(int Number, int Arr[100], int arrLength)
{
	for (int i = 0;i < arrLength;i++)
	{
		if (Arr[i] == Number)
		{
			return i;
		}
	}
	return -1;
}
bool IsNumberInArray(int Number, int Arr[100], int arrLength)
{
	return FindNumberPositionInArray(Number, Arr, arrLength) != -1;
}
void AddArrayElement(int Number, int Arr[100], int& arrLength)
{
	arrLength++;
	Arr[arrLength - 1] = Number;
}
void CopyDistinctNumberToArray(int arrSource[100],int  SourceLength,int arrDestination[100],int& DestinationLength)
{
	for (int i = 0;i < SourceLength;i++)
	{
		if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
		{
			AddArrayElement(arrSource[i], arrDestination, DestinationLength);
		}
	}
}
int main()
{
	
	int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;
	FillArray(arrSource, SourceLength);
	cout << "\nArray 1 Elements" << endl;
	PrintArray(arrSource, SourceLength);
	CopyDistinctNumberToArray(arrSource, SourceLength, arrDestination, DestinationLength);
	cout << "\nArray 2 distinct Elements" << endl;
	PrintArray(arrDestination, DestinationLength);
	
	
	return 0;
}