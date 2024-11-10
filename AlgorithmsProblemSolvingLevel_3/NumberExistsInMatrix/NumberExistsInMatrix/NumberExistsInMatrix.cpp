#include<iostream>
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

bool ISNumberInMatrix(int Matrix[3][3], short Rows, short Columun,int Number)
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
int main()
{
	int Matrix2[3][3] = { {10,50,60},{70,90,60},{60,50,19} };
	int Matrix1[3][3] = { {100,0,5},{0,1,0},{0,0,1} };
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix1, 3, 3);

	if (ISNumberInMatrix(Matrix1, 3, 3, ReadNumber("Eneter Number ")))
		cout << "\n YES: It is Sparse Matrix\n";
	else
		cout << "\n NO: It is NOT Sparse Matrix\n";


	return 0;
}