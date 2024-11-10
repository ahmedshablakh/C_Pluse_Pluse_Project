#include<iostream>
using namespace std;
int powerNumber(int number,int power)
{
	int calculate = 1 , counter=1;
	if (power == 0)
	{
		calculate = 1;
	}
	else
	{
		while (counter <= power)
		{
			calculate *= number;
			counter++;
		}

	}

	
	return calculate;
}
int main()


{
	cout << "please enter  number ...?\n";
	int number , power;
	cin >> number;
	cout << "please enter  power ...?\n";
	cin >> power;
	
	cout << "  : "<<number << "^"<< power << " = " << powerNumber(number, power) << endl;

}