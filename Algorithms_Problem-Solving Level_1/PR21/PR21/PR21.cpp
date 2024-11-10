#include<iostream>
#include<string>
using namespace std;
float ReadCircomference()
{
	float L;
	cout << "Calculate circle area tje circomference, then print on the screen.. ? \n";
	cout << "please enter circomference L ? \n";
	cin >> L;
	return L;

}
float CircleAreaByCircumference(float L)
{
	const float PI = 3.14;
	float Area = pow(L, 2) / (4 * PI);
	return Area;
}
void PrintResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaByCircumference(ReadCircomference()));

}