#include<iostream>
using namespace std;


int main()
{
	int bul;
	int i;
	int array[10] = { 10, 60, 30, 70, 60,20,701,956,534,120 };
	for (i = 0;i <= 10;i++)
	{
		if (array[i] == 20)
		{
			cout << i << endl;
			break;
		}
	}
	
	return 0;



}