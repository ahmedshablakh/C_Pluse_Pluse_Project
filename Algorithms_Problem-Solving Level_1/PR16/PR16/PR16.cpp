#include<iostream>
#include<string>
using namespace std;
void ReadNumbers(float& A, float& D)
{
	cout << "please enter A \n";
	cin >> A;
	cout << "please enter D \n";
	cin >> D;
}
float RectanglrAreaBySideAndDiagonal(float A, float D)
{
	float Area = A * sqrt(pow(D,2) - pow(A,2));
	return Area;
}
void PrintResult(float Area)
{
	cout << "Rectanglr Area By Side And Diagonal = " << Area << endl;
}

int main()
{
	float A, D;
	ReadNumbers(A,D);
	PrintResult(RectanglrAreaBySideAndDiagonal(A,D));
}