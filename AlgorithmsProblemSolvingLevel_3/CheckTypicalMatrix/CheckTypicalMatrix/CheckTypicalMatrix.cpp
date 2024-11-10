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
			Matrix[i][j] = RandomNumber(1, 10);
		}
	}

}
void PrintMatrix(int Matrix[3][3], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			printf("  %0*d", 2, Matrix[i][j]);
		}
		cout << endl;
	}

}
bool CheckTypicalEquality(int TMatrix1[3][3], int TMatrix2[3][3],int Rows,int Columun)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			if (TMatrix1[i][j] != TMatrix2[i][j])
			{
				return false;
			}
		}
	}
}
int main()
{
	int Matrix1[3][3], Matrix2[3][3];
	cout << " \n Matrix 1 : \n";
	FillMatrix(Matrix1, 3, 3);
	PrintMatrix(Matrix1, 3, 3);
	


	cout << " \n Matrix 2 : \n";
	FillMatrix(Matrix2, 3, 3);
	PrintMatrix(Matrix2, 3, 3);

	if (CheckTypicalEquality(Matrix1, Matrix2, 3, 3))

		cout << "\n YES : both matrices are typical\n";
	else 
		cout << "\n No : both matrices are NOT typical\n";
	return 0;
}