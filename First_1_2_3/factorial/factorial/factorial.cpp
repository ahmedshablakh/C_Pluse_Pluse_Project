#include<iostream>
using namespace std;

int main()
{
	cout << "Please Enter the number 1 ! .. ?" << endl;
	int num1 , sum1 = 1;
	cin >> num1;
	for (int i = 1; i <= num1; i++)
	{
		sum1 *= i;
	}
	cout <<"The munber 1  "<< num1 <<"! is : = " << sum1 << endl;

	cout << "Please Enter the number 2 ! .. ?" << endl;
	int num2, sum2 = 1;
	cin >> num2;
	for (int i = 1; i <= num2; i++)
	{
		sum2 *= i;
	}
	cout << "The  " << num2 << "! is : = " << sum2 << endl;
	cout << num1 << "! * " << num2 << "! is = " << sum1 * sum2 << endl;
	main();
	return 0;
}