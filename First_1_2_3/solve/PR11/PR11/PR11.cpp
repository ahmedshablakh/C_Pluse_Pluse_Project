#include<iostream>
using namespace std;

int main()
{
	short mark[3];
	float avg;
	cout << "Please enter mark1 .." << endl;
	cin >> mark[0];
	cout << "Please enter mark1 .." << endl;
	cin >> mark[1];
	cout << "Please enter mark1 .." << endl;
	cin >> mark[2];

	cout << " *****************************" << endl;
	avg = (mark[0] + mark[1] + mark[2]) / 3;
	if (avg >= 50)
	{
		cout << avg << endl;
		cout << "Pass ..." << endl;
	}
	else
	{
		cout << avg << endl;
		cout << "Faill ..." << endl;
	}
 

}