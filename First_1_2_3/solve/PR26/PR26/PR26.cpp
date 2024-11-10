#include<iostream>
using namespace std;
int main()
{
	cout << "Please enter 1 to 'number' " << endl;
	int number, counter = 1;
	cin >> number;
	while (counter<=number)
	{
		cout << counter << endl;
		counter++;
	}
}