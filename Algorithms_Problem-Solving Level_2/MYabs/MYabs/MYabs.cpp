#include<iostream>
#include<math.h>
using namespace std;
float Myabs(float Number)
{
	if (Number > 0)
		return Number;
	else
	{
		return Number * -1;
	}
}

int main()
{
	float Number = 0;
	cout << "Please enter a Number ? ";
	cin >> Number;
	cout << "My abs is " << Myabs(Number) << endl;
	cout << "C++ abs is " << abs(Number) << endl;
	return 0;
}