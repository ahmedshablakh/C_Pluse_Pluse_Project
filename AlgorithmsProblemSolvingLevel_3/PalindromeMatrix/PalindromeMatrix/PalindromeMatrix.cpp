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
void FillMatrix(int Matrix[5][5], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			Matrix[i][j] = RandomNumber(1, 50);
		}
	}

}


void PrintMatrix(int Matrix[5][5], short Rows, short Columun)
{

	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun;j++)
		{
			printf("  %0*d", 2, Matrix[i][j]);
		}
		cout << endl << endl;
	}

}


bool IsPalindromeMatrix(int Matrix1[5][5], short Rows, short Columun)
{
	
	for (int i = 0;i < Rows;i++)
	{
		for (int j = 0;j < Columun/2;j++)
		{
			if (Matrix1[i][j]!= Matrix1[i][Columun - 1 - j])
			{
				return false;
			}
		}
		
	}
	return true;
	
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	//int Matrix1[3][3];
	int Matrix1[5][5] = { {1,2,1,2,1},{2,11,2,11,2},{4,4,5,4,4},{2,11,2,11,2},{4,4,5,4,4} };
	//FillMatrix(Matrix1, 3, 3);
	cout << " \n Matrix 1 : \n";
	PrintMatrix(Matrix1, 5, 5);

	if (IsPalindromeMatrix(Matrix1, 5, 5))
		cout << "\nPalindrome \n";
	else 
		cout << "\n Not Palindrome \n";
	return 0;
}