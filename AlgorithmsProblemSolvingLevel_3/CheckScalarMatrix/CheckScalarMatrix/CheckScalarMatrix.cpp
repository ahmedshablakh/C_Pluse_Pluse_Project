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
			printf("  %d", Matrix[i][j]);
		}
		cout << endl;
	}

}
bool  IsScalarMatrix(int TMatrix1[3][3], int Rows, int Columun)
{
	int  FirstDiagonalElement = TMatrix1[0][0];
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			
			if (i == j && TMatrix1[i][j] != FirstDiagonalElement)
			{
				return false;
			}
			else if (i != j && TMatrix1[i][j] != 0)
			{
				return false;
			}
		}
	}
}
int main()
{
	int Matrix1[3][3] = { {9,0,0},{0,9,0},{0,0,9} };
	int Matrix2[3][3] = { {1,0,5},{0,1,0},{0,0,1} };
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);



	if (IsScalarMatrix(Matrix1, 3, 3))

		cout << "\n YES : Matrix is Scalar\n";
	else
		cout << "\n No : Matrix is Not Scalar \n";
	return 0;
}