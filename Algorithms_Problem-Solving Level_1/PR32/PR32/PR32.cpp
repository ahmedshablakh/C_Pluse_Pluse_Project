#include<iostream>
using namespace std;

int ReadNumber()
{
	cout << "Please enter number ..?\n";
	int number;
	cin >> number;
	return number;

}
int ReadPower()
{
	cout << "Please enter Power ..?\n";
	int Power;
	cin >> Power;
	return Power;
}

int  PowerOfM(int number, int Power)
{
	if (Power == 0)
	{
		return 1;
	}
	int P = 1;
	for (int i = 1;i <= Power;i++)
	{
		P *= number;
	}
	return P;
}
int main()
{
	cout << "Enter Number and enter powe Result number with pow  \n";
	int Number = ReadNumber(),
	Power = ReadPower();
	cout << Number << " ^ " << Power << " = " << PowerOfM(Number, Power) << endl;
}