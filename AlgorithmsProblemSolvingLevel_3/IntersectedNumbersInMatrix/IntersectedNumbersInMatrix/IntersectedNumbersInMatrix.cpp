#include<iostream>
#include<string>
#include <iomanip>

using namespace std;
int ReadNumber(string Massge)
{
	int Number;
	do
	{
		cout << Massge << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;


}
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
bool ISNumberInMatrix(int Matrix[3][3], short Rows, short Columun, int Number)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			if (Matrix[i][j] == Number)
				return true;
		}

	}
	return false;

}

void PrintMatrix(int Matrix[3][3], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			printf("  %d", Matrix[i][j]);
		}
		cout << endl << endl;
	}

}

void PrintIntersectedNumbersInMatrix(int Matrix1[3][3],int Matrix2[3][3] , short Rows,short Columun)
{
	int Number;
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			Number = Matrix1[i][j];
			if (ISNumberInMatrix(Matrix2, 3, 3, Number))
			{
				cout << setw(3) << Number << setw(3);

			}
		}
		
	}
}

int main()
{
	int Matrix2[3][3] = { {10,50,60},{70,90,60},{60,50,19} };
	int Matrix1[3][3] = { {10,60,50},{10,11,12},{14,10,50} };
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix2, 3, 3);
	cout << " \n  Intersected Numbers In Two Matrix : \n";
	PrintIntersectedNumbersInMatrix(Matrix1, Matrix2, 3, 3);


	return 0;
}