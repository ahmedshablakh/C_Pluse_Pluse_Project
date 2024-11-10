#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int Arr[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{
			Arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int Arr[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{

			printf("   %0*d", 2, Arr[i][j]);
			//cout << setw(3) << Arr[i][j] << "  ";
		}
		cout << endl;
	}
}
int SumCol(int Arr[3][3], short Rows, short Column)
{
	int sum = 0;
	for (int j = 0;j < Rows;j++)
	{
		sum = sum + Arr[j][Column];
	}
	return sum;
}
void SumMatrixColInArry(int Array2[3], int Arr[3][3], short Rows, short Column)
{
	for (int i = 0;i < Column;i++)
	{
		Array2[i] = SumCol(Arr, Rows, i);
	}
}
void PrintRowsSumArray(int Array2[3], short Rows)
{
	for (int i = 0;i < Rows;i++)
	{
		cout << "The row " << i + 1 << " sum = " << Array2[i] << endl;
	}
}
int main()
{
	//Seeds thr random number generator in c++ , called only once
	srand((unsigned)time(NULL));
	int Arr[3][3];
	int Array2[3];

	FillMatrixWithRandomNumbers(Arr, 3, 3);
	cout << "\n The following is a3x3 random matrix :\n";
	PrintMatrix(Arr, 3, 3);
	SumMatrixColInArry(Array2, Arr, 3, 3);
	cout << "\n The following are the sum of each Column in the matrix is :\n";
	PrintRowsSumArray(Array2, 3);

	return 0;
}