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
bool CheckDaigonalMareix(int TMatrix1[3][3], int Rows, int Columun)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			if (i==j && TMatrix1[i][j]!=1)
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
	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	int Matrix2[3][3] = { {1,0,5},{0,1,0},{0,0,1} };
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);



	if (CheckDaigonalMareix(Matrix1, 3, 3))

		cout << "\n YES : both matrices are typical\n";
	else
		cout << "\n No : both matrices are NOT typical\n";
	return 0;
}