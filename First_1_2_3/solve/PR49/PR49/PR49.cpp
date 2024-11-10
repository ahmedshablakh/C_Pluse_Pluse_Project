#include<iostream>
using namespace std;

int main()
{
	short PIN;
	cout << "Please enter your PIN .. " << endl;
	cin >> PIN;
	if (PIN==12345)
	{
		cout << "Valid ... " << endl;
	}
	else
	{
		cout << "InValid ... " << endl;
		main();
	}
	
}