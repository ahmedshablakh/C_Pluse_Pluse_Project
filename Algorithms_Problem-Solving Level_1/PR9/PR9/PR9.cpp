#include<iostream>
using namespace std;

void ReadNumber(int& Num1,int& Num2,int& Num3)
{
	cout << "Please enter Num1 ..\n";
	cin >> Num1;
	cout << "Please enter Num2 ..\n";
	cin >> Num2;
	cout << "Please enter Num3 ..\n";
	cin >> Num3;
}
int sunOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
void PrintResult(int Total)
{
	cout << "The sun to 3 numbers is : " << Total << endl;
}
int main()
{
	int Num1, Num2, Num3;
	ReadNumber(Num1, Num2, Num3);
	PrintResult(sunOf3Numbers(Num1, Num2, Num3));
}