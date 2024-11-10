#include<iostream>
#include<string>
using namespace std;

void RradTringleData(float& A, float& B, float& C)
{
	cout << "Please enter tringle side A \n";
	cin >> A;
	cout << "Please enter tringle base B \n";
	cin >> B;
	cout << "Please enter tringle base B \n";
	cin >> C;

}
float CircleAreaByATringle(float A, float B, float C)
{
	const float PI = 3.14;
	float P, T;
	P = (A + B + C) / 2;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Area = PI * pow(T, 2);
	return Area;
}
void PrintResult(float Area)
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	float A, B , C;
	RradTringleData(A, B, C);
	PrintResult(CircleAreaByATringle(A, B, C));

}