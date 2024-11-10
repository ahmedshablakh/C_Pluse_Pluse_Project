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
			Matrix[i][j] = RandomNumber(1, 50);
		}
	}

}


void PrintMatrix(int Matrix[3][3], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			printf("  %0*d", 2,Matrix[i][j]);
		}
		cout << endl << endl;
	}

}

int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Columun)
{
	int Min = Matrix1[0][0];
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			
			if (Min > Matrix1[i][j])
			{
				Min = Matrix1[i][j];

			}
		}

	}
	return Min;
}
int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Columun)
{
	int Max = Matrix1[0][0];
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{

			if (Max < Matrix1[i][j])
			{
				Max = Matrix1[i][j];

			}
		}

	}
	return Max;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3] ;
	//int Matrix1[3][3] = { {10,60,50},{10,11,12},{14,10,50} };
	FillMatrix(Matrix1, 3, 3);
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);
	
	cout << "\n The Min Number in Matrix is : " << MinNumberInMatrix(Matrix1, 3, 3) << endl;
	cout << "\n The Max Number in Matrix is : " << MaxNumberInMatrix(Matrix1, 3, 3) << endl;


	return 0;
}