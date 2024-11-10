#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
int RandomNumber(int From , int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int Arr[3][3],short Rows,short Column)
{
	for (int i = 0;i < Rows ;i++)
	{
		for (int j = 0;j < Column;j++)
		{
			Arr[i][j] = RandomNumber(1,100);
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
int SumRow(int Arr[3][3], short RowNumber, short Column)
{
	int sum = 0;
	for (int j = 0;j < Column;j++)
	{
		sum = sum + Arr[RowNumber][j];
	}
	return sum;
}
void PrintEachRowSum(int Arr[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		cout <<"  Row "<<i+1<<" Sum = "<< SumRow(Arr, i, Column) << endl;
	}
}
int main()
{
	//Seeds thr random number generator in c++ , called only once
	srand((unsigned)time(NULL));
	int Arr[3][3];
	FillMatrixWithRandomNumbers(Arr,3,3);
	cout << "\n The following is a3x3 random matrix :\n";
	PrintMatrix(Arr,3,3);
	cout << "\n The following are the sum of each row in the matrix is :\n";
	PrintEachRowSum(Arr, 3, 3);

	return 0;
}