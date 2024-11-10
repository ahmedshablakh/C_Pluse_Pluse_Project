#include<iostream>
using namespace std;
string ReadPinCode()
{
	string PinCode;
	cout << "Please enter PIN code \n";
	cin >> PinCode;
	return PinCode;
}
bool Login()
{
	string PinCode;
	int conter = 3;
	do
	{
		conter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;//this will exit the function and return 
		}
		else
		{
			if (conter == 0)
				return 0;
			cout << "\n Wrong PIN, you have " <<conter <<" more tries  ";
			system("color 4F");//turn screen to Red
		}
	} while (/*conter >= 1 &&*/ PinCode != "1234");
	return 0;
}
int main()
{
	if (Login())
	{
		system("color 2F");//turn screen to green
		cout << "\n Your account balance is " << 7500 << endl;
	}
	else {
		cout << "\n Wrong PIN \n Your card blocked call the bamk for help..!" << endl;
	}
	return 0;
}