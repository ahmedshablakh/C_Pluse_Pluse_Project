#include<iostream>
#include<math.h>
using namespace std;


int MyFloor(float Number)
{
	
	if (Number > 0)
		return int(Number);
	  
	else
	{
		return int(Number) - 1;
	}
}
int main()
{
	float Number = 0;
	cout << "Please enter a Number ? ";
	cin >> Number;

	cout << "My Floor is " << MyFloor(Number) << endl;
	cout << "C++ Floor is " << floor(Number) << endl;
	return 0;
}