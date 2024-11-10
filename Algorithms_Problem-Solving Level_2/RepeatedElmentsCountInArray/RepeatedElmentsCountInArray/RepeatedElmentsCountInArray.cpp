#include<iostream>

using namespace std;

int PositiveNumber(string Massege)
{
	int Number;
	do
	{
		cout << Massege << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}
void ReadArray(int Arry[100],int& arrLength)
{
	
	
		cout << "\nEnter number of elements:\n";
		cin >> arrLength;
		cout << "\nEnter array elements: \n";
		for (int i = 0;i < arrLength;i++)
		{
			cout << "Element [" << i + 1 << "] : ";
			cin >> Arry[i];
		}
		cout << endl;
	
	
}
void PrintArray(int Arry[100], int arrLength)
{
	for (int i = 0; i < arrLength;i++)
		cout << Arry[i] << " ";

	cout << endl;
	
}
int TimesRepeated(int Number, int arr[100], int arrLength)
{
	int count = 0;
	for (int i = 0;i < arrLength ;i++)
	{
		if (Number == arr[i])
			count++;
	}
	return count;
}
int main()
{
	int Arry[100], arrLength, NumberToCheck;
	 ReadArray(Arry, arrLength);
	 NumberToCheck = PositiveNumber("Enter the number you want to check: ");
	 cout << "\nOriginal array:  ";
	 PrintArray(Arry, arrLength);

	 cout << "\nNumber " << NumberToCheck;
	 cout << " is repeated ";
	 cout << TimesRepeated(NumberToCheck, Arry, arrLength) << " time(s)\n";
	return 0;
}