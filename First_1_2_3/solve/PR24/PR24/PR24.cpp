#include<iostream>
using namespace std;

int main()
{
	short Age;
	cout << "Please enter your Age .. " << endl;
	cin >> Age;
	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid ... " << endl;
	}
	else
	{
		cout << "InValid ... " << endl;
	}
}