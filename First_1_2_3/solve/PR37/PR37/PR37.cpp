#include<iostream>
using namespace std;

int main()


{
	int number, sum = 0;
	cout << "please enter  number ...?\n";
	cin >> number;
	while (number!= -99)
	{
		sum += number;
		cout << "please enter  number ...?\n";
		cin >> number;
	}
	

	cout << "  : " << sum << endl;

}