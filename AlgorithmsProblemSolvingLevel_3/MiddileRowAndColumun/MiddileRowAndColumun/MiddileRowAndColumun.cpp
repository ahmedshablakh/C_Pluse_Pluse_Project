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
void PrintMiddleRowOfMatrix(int Matrix[3][3], short Rows, short Column)
{
	short MiddleRow = Rows / 2;
	for (int i = 0;i < Column;i++)
	{
		printf("   %0*d", 2, Matrix[MiddleRow][i]);
	}
}
void PrintMiddleColOfMatrix(int Matrix[3][3], short Rows, short Column)
{
	short MiddleCol = Column / 2;
	for (int i = 0;i < Rows;i++)
	{
		printf("     %0*d\n", 2, Matrix[i][MiddleCol]);
	}
}

int main()
{
	//Seeds thr random number generator in c++ , called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix 1 :\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\n Row Middle 1 :\n";
	PrintMiddleRowOfMatrix(Matrix1, 3, 3);
	cout << "\n Col Middle 1 :\n";
	PrintMiddleColOfMatrix(Matrix1, 3, 3);

	

	return 0;
}