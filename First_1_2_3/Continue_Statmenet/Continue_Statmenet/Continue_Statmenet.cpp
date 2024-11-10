#include<iostream>
using namespace std;


int main()
{
	int sum = 0;
	int number;
	for (int i = 1;i <= 5 ;i++)
	{
		cout << "Enter Number ..\n";
		cin >> number;
		if (number >= 50)
		{
			cout << "The number is greater than 50 and won't br calculated." << endl;
			continue;
		}
		sum += number;
	}
	cout << sum << endl;

	return 0;



}