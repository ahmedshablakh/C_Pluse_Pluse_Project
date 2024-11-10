#include<iostream>
using namespace std;

int main()
{
	short grade;
	cout << "Please enter Grade .. " << endl;
	cin >> grade;

	if (grade >= 90)
	{
		cout << "A" << endl;
	}
	else if (grade >= 80)
	{
		cout << "B" << endl;
	}
	else if (grade >= 70)
	{
		cout << "C" << endl;
	}
	else if (grade >= 60)
	{
		cout << "D" << endl;
	}
	else if (grade >= 50)
	{
		cout << "E" << endl;
	}
	else
	{
		cout << "F" << endl;
	}
}