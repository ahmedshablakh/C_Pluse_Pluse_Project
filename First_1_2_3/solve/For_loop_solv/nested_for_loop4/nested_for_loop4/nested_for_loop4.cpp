#include<iostream>
using namespace std;
int main()
{
	for (int i = 10;i >=1;i--)
	{
		for (int j = 1; j <= i;j++)
		{
			cout << "*";

		}
		cout << endl;
	}
	cout << "----------------------------------------------------"<<endl;
	for (int i = 1;i <= 10;i++)
	{
		for (int j = i; j <= 10;j++)
		{
			cout << j<<" ";

		}
		cout << endl;
	}
	cout << "----------------------------------------------------" << endl;
	for (int i = 1;i <= 10;i++)
	{
		for (int j = 1; j <= i;j++)
		{
			cout << j;

		}
		cout << endl;
	}
	cout << "----------------------------------------------------" << endl;
	for (int i = 65;i <= 70;i++)
	{
		
		for (int j = 65; j <= i;j++)
		{
			cout << char(j);

		}
		cout << endl;
	}
}