#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(float& A, float& H)
{
	cout << "please enter A \n";
	cin >> A;
	cout << "please enter H \n";
	cin >> H;
}
float TriangleArea(float A, float H)
{
	float Area = (A / 2) * H;
	return Area;
}
void PrintResult(float Area)
{
	cout << "Triangle Area = " << Area << endl;
}

int main()
{
	float A, H;
	ReadNumbers(A, H);
	PrintResult(TriangleArea(A, H));
}