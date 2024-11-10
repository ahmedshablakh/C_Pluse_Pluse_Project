#include<iostream>
using namespace std;

int main()
{
	int arry[] = { 1,2,3,4,5 };

	int sum = 0;
	for (int x : arry)
	{
		
		sum += x;
	}
	cout << sum<< endl;
	return 0;
}