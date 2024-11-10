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
int SumOFMatrix(int Matrix[3][3], short Rows, short Column)
{
	int Sum = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Column; j++)
		{
			Sum = Sum + Matrix[i][j];
		}
	}
	return Sum;
}
int main()
{
	//Seeds thr random number generator in c++ , called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3];

	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	cout << "\n Matrix 1 :\n";
	PrintMatrix(Matrix1, 3, 3);
	

	cout << "Sum Of Matrix 1 : " << SumOFMatrix(Matrix1, 3, 3) << endl;


	return 0;
}