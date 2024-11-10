#include<iostream>
using namespace std;

int main()
{

	int Arr[10][10];
	for (int r = 0;r < 10;r++)
	{
		for (int c = 0;c < 10;c++)
		{
			Arr[r][c] = (r + 1) * (c + 1);
			printf("%0*d  ",2, Arr[r][c]);
		}
		cout << endl;
	}
	
	return 0;
}