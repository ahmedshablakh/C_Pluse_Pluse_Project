#include<iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Num 1 ? \n";
	cin >> Num1;
	cout << "Please enter Num 2 ? \n";
	cin >> Num2;

}
int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}
void PrintMaxNumbers(int Max)
{
	cout << "The Maximum Number is : " << Max << endl;

}

int main()
{

	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintMaxNumbers(MaxOf2Numbers(Num1, Num2));
	

}