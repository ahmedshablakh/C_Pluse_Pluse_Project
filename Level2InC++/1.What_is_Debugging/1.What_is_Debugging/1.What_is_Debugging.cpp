#include<iostream>
using namespace std;
int ReadPositiveNumber(string message)
{
	int Number;
	do
	{
		cout << message << endl;
		cin >> Number;
	}while (Number < 0);
	
	return Number;
}
int SumToNumber(int N1, int N2)
{
	return N1 + N2;
}
int main()
{
	int Num1 = ReadPositiveNumber("Please enter Number \n");
	int Num2 = ReadPositiveNumber("Please enter Number \n");
	int sum = SumToNumber(Num1, Num2);
	cout << "Sum to Number is : " << sum << endl;

}