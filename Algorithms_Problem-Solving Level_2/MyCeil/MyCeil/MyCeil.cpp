#include<iostream>
#include<math.h>
using namespace std;

float GetFractionPart(float Number)
{
	return Number - int(Number);
}
int MyCeil(float Number)
{

	if (abs(GetFractionPart(Number)) > 0)
	{
		if (Number > 0)
			return int(Number) + 1;
		else
			return int(Number);
	}
	else
		return Number;
		
}
int main()
{
	float Number = 0;
	cout << "Please enter a Number ? ";
	cin >> Number;

	cout << "My Ceil is " << MyCeil(Number) << endl;
	cout << "C++ Ceil is " << ceil(Number) << endl;
	return 0;
}