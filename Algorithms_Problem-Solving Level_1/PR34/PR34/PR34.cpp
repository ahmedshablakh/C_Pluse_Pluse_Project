#include<iostream>
#include<string>
using namespace std;

int ReadTotalSalse()
{
	int TotalSales;
	cout << "Plase enter a Total Sales? " << endl;
	cin >> TotalSales;
	return TotalSales;
}
float GetComissionPercentage(float TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}
float CalculateTotalComission(float TotalSales)
{
	return GetComissionPercentage(TotalSales)* TotalSales;
} 
int main()
{
	float TotalSalse = ReadTotalSalse();
	cout << endl << "Comission Percenetage = " << GetComissionPercentage(TotalSalse) << endl;
	cout << endl << "Total Comission = " << CalculateTotalComission(TotalSalse) << endl;
	return 0;
}
