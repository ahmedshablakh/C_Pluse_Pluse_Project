#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int Matrix[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{

			printf("   %0*d", 2, Matrix[i][j]);
			//cout << setw(3) << Matrix[i][j] << "  ";
		}
		cout << endl;
	}
}
void MultiplyMatrix(int Arr3[3][3], int Arr2[3][3], int Arr1[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{

			Arr3[i][j] = Arr2[i][j] * Arr1[i][j];
		}
	}
}
int main()
{
	//Seeds thr random number generator in c++ , called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3] , Matrix2[3][3], Matrix3[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix 1 :\n";
	PrintMatrix(Matrix1, 3, 3);

	FillMatrixWithRandomNumbers(Matrix2, 3, 3);
	cout << "\n Matrix 2 :\n";
	PrintMatrix(Matrix2, 3, 3);

	MultiplyMatrix(Matrix3, Matrix2, Matrix1, 3, 3);

	cout << "\n Multiply Two Matrix :\n";
	PrintMatrix(Matrix3, 3, 3);

	return 0;
}