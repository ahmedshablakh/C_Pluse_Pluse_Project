#include<iostream>
using namespace std;

int main()
{
	float TotalSales,
		Pers;
 
	cout << "please enter TotalSales" << endl;
	cin >> TotalSales;
	if (TotalSales >= 1000000)
	{
		Pers = 0.01;
	}
	else if(TotalSales>= 5000000)
	{
		Pers = 0.02;
	}
	else if (TotalSales >= 100000000)
	{
		Pers = 0.02;
	}
	else if (TotalSales >= 5000000000)
	{
		Pers = 0.05;
	}
	else
	{
		Pers = 1;
	}
	cout << TotalSales * Pers << endl;

}