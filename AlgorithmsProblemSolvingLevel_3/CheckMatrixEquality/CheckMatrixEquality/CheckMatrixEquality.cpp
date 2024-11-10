#include<iostream>
using namespace std;
int RandomNumber(int From, int To)
{
	int Number = rand() % (To - From + 1) + From;
	return Number;
}

void FillMatrix(int Matrix[3][3], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			Matrix[i][j] = RandomNumber(1, 100);
		}
	}

}
void PrintMatrix(int Matrix[3][3], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			printf("  %0*d",2,Matrix[i][j]);
		}
		cout << endl;
	}

}
int SumOfMatrix(int Matrix[3][3], short Rows, short Columun)
{
	int sum = 0;
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			sum += Matrix[i][j];
		}
		
	}
	return sum;
}
void CheckMatrixEquality(int TMatrix1, int TMatrix2)
{
	if (TMatrix1 == TMatrix2)
		cout<< "YES : both matrices are equal.\n";
	else
		cout<< "No : both matrices are Not equal.\n";
}
int main()
{
	int Matrix1[3][3], Matrix2[3][3];
	cout << " \n Matrix 1 : \n";
	FillMatrix(Matrix1,3,3);
	PrintMatrix(Matrix1, 3, 3);
	cout << " \n Sum Of Matrix 1 : "<< SumOfMatrix(Matrix1, 3, 3) << endl;
	

	cout << " \n Matrix 2 : \n";
	FillMatrix(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);
	cout << " \n Sum Of Matrix 2 : " << SumOfMatrix(Matrix2, 3, 3) << endl;
	CheckMatrixEquality(SumOfMatrix(Matrix1, 3, 3), SumOfMatrix(Matrix2, 3, 3));

	return 0;
}