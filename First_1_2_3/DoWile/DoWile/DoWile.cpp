#include<iostream>
using namespace std;

int ReadIntNumberInRabge(int from, int to)
{
	int number;
	do
	{
		cout << "Please enter a number between " << from << " and " << to << endl;
		cin >> number;

	} while (number<from || number>to);
	return number;
}
int main()
{
	cout << "the number is: " << ReadIntNumberInRabge(0, 100) << endl;

}
