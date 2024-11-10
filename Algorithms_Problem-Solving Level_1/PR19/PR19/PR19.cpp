#include<iostream>
#include<string>
using namespace std;
float ReadDiameter()
{
	float D;

	cout << "please enter diameter D ? \n";
	cin >> D;
	return D;

}
float CircleAreaByDiameter(float D)
{
	const float PI = 3.14;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;
}
void PrintResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByDiameter(ReadDiameter()));

}