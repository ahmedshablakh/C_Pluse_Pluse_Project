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
float MonthlyInstallment(float LoanAmount, float HowMonyMonths)
{
	return (float)LoanAmount / HowMonyMonths;
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount?");
	float HowMonyMonths = ReadPositiveNumber("How Many Months?");
	cout << endl << "Monthly Installment = " << MonthlyInstallment(LoanAmount, HowMonyMonths) << endl;
	return 0;
}