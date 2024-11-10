#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

void FillMatrixWithOrderedNumbers(int Arr[3][3], short Rows, short Column)
{

	int countr = 0;
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{
			countr++;
			Arr[i][j] = countr;
		}
	}
}
void Transpose(int Array[3][3], int Arr[3][3], short Rows, short Column)
{
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Column;j++)
		{
			Array[i][j] = Arr[j][i];
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

int main()
{

	

	//Seeds thr random number generator in c++ , called only once
	srand((unsigned)time(NULL));
	int Arr[3][3];
	int Array2[3][3];
	FillMatrixWithOrderedNumbers(Arr, 3, 3);
	cout << "\n The following is a3x3 Ordered matrix :\n";
	PrintMatrix(Arr, 3, 3);
	Transpose(Array2, Arr, 3, 3);
	cout << "\n The following is a3x3 Transporse matrix :\n";
	PrintMatrix(Array2, 3, 3);

	return 0;
}