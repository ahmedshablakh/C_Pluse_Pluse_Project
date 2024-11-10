#include<iostream>
#include<math.h>
using namespace std;

float MySqrt(float Number)
{
	return pow(Number, 0.5);
}

int main()
{
	float Number = 0;
	cout << "Please enter a Number ? ";
	cin >> Number;

	cout << "My Sqrt is " << MySqrt(Number) << endl;
	cout << "C++ Sqrt is " << sqrt(Number) << endl;
	return 0;
}