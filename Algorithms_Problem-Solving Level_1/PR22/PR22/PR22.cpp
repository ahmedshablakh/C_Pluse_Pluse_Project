#include<iostream>
#include<string>
using namespace std;

void RradTringleData(float& A, float& B)
{
	cout << "Please enter tringle side A \n";
	cin >> A;
	cout << "Please enter tringle base B \n";
	cin >> B;

}
float CircleAreaByInscribedTringle(float A , float B)
{
	const float PI = 3.14;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}
void PrintResult(float Area) 
{
	cout << "Circle Area = " << Area << endl;
}

int main()
{
	float A, B;
	RradTringleData(A, B);
	PrintResult(CircleAreaByInscribedTringle(A, B));

}