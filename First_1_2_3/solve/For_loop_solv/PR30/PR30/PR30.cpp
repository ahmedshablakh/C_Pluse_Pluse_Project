#include<iostream>
using namespace std;

int factorialNumber(int num)
{
	int sum = 1, counter = 1;
	for (counter; counter <= num; counter++)
	{
		sum = sum * counter;
	}
	return sum;
	
}
int main()
{
	cout << "Please enter the factorial number .." << endl;
	int num;
	cin >> num;
	if (num > 0) {
		cout << factorialNumber(num) << endl;
	}
	else
	{
		cout << "factorial Must be Positive Number...? " << endl;

	}
	
}