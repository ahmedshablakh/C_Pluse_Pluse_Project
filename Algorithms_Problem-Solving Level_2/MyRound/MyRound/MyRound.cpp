#include<iostream>
#include<math.h>
using namespace std;


float GetFractionPart(float Number)
{
	return Number - int(Number);
}
float Myabs(float Number)
{
	if (Number > 0)
		return Number;
	else
	{
		return Number * -1;
	}
}
int MyRound(float Number)
{
	int IntPart;
	IntPart = int(Number);
	float FracrionsPart = GetFractionPart(Number);
	if (Myabs(FracrionsPart) >= 0.5)
	{
		if (IntPart > 0)
			return IntPart + 1;
		else
			return IntPart - 1;
	}
	else
	{
		return IntPart;
	}
}
int main()
{
	float Number = 0;
	cout << "Please enter a Number ? ";
	cin >> Number;

	cout << "My Round is " << MyRound(Number) << endl;
	cout << "C++ Round is " << round(Number) << endl;
	return 0;
} 