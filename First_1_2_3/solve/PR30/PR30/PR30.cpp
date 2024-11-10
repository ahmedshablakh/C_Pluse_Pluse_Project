#include<iostream>
using namespace std;
int factorial(int number)
{
	while (number <= 0)
	{
		cout << "factorial Must be Positive Number...\n";
		cin >> number;
	}
	int counter = 1, sum = 1;

	while (counter <= number)
	{
		sum *= counter;
		counter++;
	}
	return sum;
}
int main()


{
	cout << "please enter a factorial number ...?\n";
	int number;
	cin >> number;
	cout << factorial(number) << endl;

}