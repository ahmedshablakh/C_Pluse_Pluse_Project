#include<iostream>
#include<string>

using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return (float)LoanAmount / MonthlyInstallment;
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount?");
	float MonthlyInstallment = ReadPositiveNumber("Please enter Montlu Installment?");
	cout << endl << "Total Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
	return 0;
}