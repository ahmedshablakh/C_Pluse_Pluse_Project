#include<iostream>
using namespace std;
int main()
{
	cout << "Please enter 1 to 'number' " << endl;
	int number, counter = 1, sum = 0;
	cin >> number;
	while (counter <= number)
	{
		if (counter % 2 == 0)
		{
			sum += counter;

		}
		counter++;
	}
	cout << sum << endl;

	return 0;
}