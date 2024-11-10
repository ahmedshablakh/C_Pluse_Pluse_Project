#include<iostream>
using namespace std;
void ReadDimensions(float& A, float& B)
{
	cout << "Please enter the Dimensions is A \n";
	cin >> A;
	cout << "Please enter the Dimensions is B \n";
	cin >> B;
}
float CalculateRectangleArea(float A, float B)
{
	return A * B;

}
void PrintResulte(float Area)
{
	cout << "The Rectangle Area is : " << Area << endl;

}
int main()
{
	float A, B;
	ReadDimensions(A, B);
	PrintResulte(CalculateRectangleArea(A, B));
}