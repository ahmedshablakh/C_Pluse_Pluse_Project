#include<iostream>
using namespace std;

int main()
{

	int Arr[3][4] = {
						{1,2,3,4},{5,6,7,8},{9,10,11,12}
	};
	for (int r = 0; r < 3;r++)
	{
		for (int c = 0;c < 4;c++)
		{
			cout << Arr[r][c]<<" ";
		}
		cout << endl;
	}
	return 0;
}