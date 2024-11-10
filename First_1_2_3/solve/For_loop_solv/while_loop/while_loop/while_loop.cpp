#include<iostream>
using namespace std;

int ReadIntNumberInRabge(int from, int to)
{
	int number;
	cout << "Please enter a number between " << from << " and " << to << endl;
	cin >> number;
	while (number<from || number>to)
	{
		cout << "Please enter a number between " << from << " and " << to << endl;
		cin >> number;

	}
	return number;
}

int main()
{
	int i=1;
	while ( i<=5)
	{
		cout << i << endl;
		i++;
	}
	cout << "\n\n**********************************\n\n";
	cout << "Read Positive Number ...\n";
	cout << "Please enter a Positive Number ...\n";
	int number;
	cin >> number;
	while (number<0)
	{
		cout << "Wrog Number, Plz enter a Pozitive number ...\n";
		cin >> number;
	}
	cout << "The Number You entered is : " << number << endl;
	cout << "\n\n**********************************\n\n";
	cout << "\n\n**********************************\n\n";
	cout << "Read Number in Range... " << endl;
	cout << "the number is: " << ReadIntNumberInRabge(0, 100) << endl;
	return 0;



}