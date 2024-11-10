#include<iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
	cout << "Please enter Num 1 ? \n";
	cin >> Num1;
	cout << "Please enter Num 2 ? \n";
	cin >> Num2;
	cout << "Please enter Num 2 ? \n";
	cin >> Num3;

}
int MaxOf3Numbers(int Num1, int Num2,int& Num3)
{
	if (Num1 > Num2)
	{
		if (Num1 > Num3)
			return Num1;
		else
			return Num3;
	}
	
	else
	{
		if (Num2 > Num3)
			return Num2;
		else
			return Num3;
	}
}
void PrintMaxNumbers(int Max)
{
	cout << "The Maximum Number is : " << Max << endl;

}

int main()
{

	int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintMaxNumbers(MaxOf3Numbers(Num1, Num2, Num3));


}