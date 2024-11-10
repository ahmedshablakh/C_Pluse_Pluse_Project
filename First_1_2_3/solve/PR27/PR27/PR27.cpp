#include<iostream>
using namespace std;
int main()
{
	cout << "Please enter 1 to 'number' " << endl;
	int number, counter;
	cin >> number;
	counter = number;
	while (1 <= counter)
	{
		cout << counter << endl;
		counter--;
	}
}