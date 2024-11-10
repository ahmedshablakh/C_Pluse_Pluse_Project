#include<iostream>
#include<string>
using namespace std;
float ReadRadious()
{
	float R;

	cout << "please enter radious R ? \n";
	cin >> R;
	return R;
	
}
float CalAreculateArea(float R)
{
	const float PI = 3.14;
	float Area =pow(R, 2) * PI;
	return Area;
}
void PrintResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CalAreculateArea(ReadRadious()));
	
}