#include<iostream>
using namespace std;

int main()


{
	int PIN , counter = 1;
	cout << "please enter a PIN..?\n";
	cin >> PIN;
	if (PIN != 12345)
	{
		while (counter <= 2)
		{
			counter++;
			cout << "please enter a PIN..?\n";
			cin >> PIN;
		}
		cout << "Card Lockes...!\n";
	}
		
	else
	{

		int Balance = 7500;
		cout << "Your Balance is : " << Balance << endl;
		counter = 3;
	}
		

	


}