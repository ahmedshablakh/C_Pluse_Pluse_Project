#include<iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill +  Service  = " << TotalBill * 1.1 << endl;
	cout << "Total Bill After Service Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
	return 0;
}