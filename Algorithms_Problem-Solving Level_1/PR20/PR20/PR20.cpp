#include<iostream>
#include<string>
using namespace std;
float ReadSquareSide()
{
	float A;

	cout << "please enter square side A ? \n";
	cin >> A;
	return A;

}
float CircleAreaInscribedInSquare(float A)
{
	const float PI = 3.14;
	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}
void PrintResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));

}