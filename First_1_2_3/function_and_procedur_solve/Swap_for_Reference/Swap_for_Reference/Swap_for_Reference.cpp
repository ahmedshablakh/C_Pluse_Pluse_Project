#include<iostream>
using namespace std;
void Swap_Number(int &num1,int &num2)
{

	int num3;
	num3 = num1;
	num1 = num2;
	num2 = num3;

	cout << " Swap number 1 is :" << num1 << " Swap number 2 is :" << num2 << endl;
}

int main()
{
	int num1, num2;
	cout << "Please enter Two Number " << endl;
	cin >> num1 >> num2;
	cout << "Number1 is : " << num1 << endl;
	cout << "Number2 is : " << num2 << endl;
	Swap_Number(num1, num2);
	cout << "Number1 is : " << num1 << endl;
	cout << "Number2 is : " << num2 << endl;
}
