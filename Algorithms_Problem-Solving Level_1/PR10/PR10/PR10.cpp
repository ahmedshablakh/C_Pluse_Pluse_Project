#include<iostream>
using namespace std;
void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please enter Mark1 ..\n";
	cin >> Mark1;
	cout << "Please enter Mark2 ..\n";
	cin >> Mark2;
	cout << "Please enter Mark3 ..\n";
	cin >> Mark3;
}
int sunOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
	return (float)sunOf3Marks(Mark1, Mark2, Mark3)/3;
}
void PrintResulte(float Average)
{
	cout << "\n The Average is : " << Average << endl;
}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintResulte(CalculateAverage(Mark1, Mark2, Mark3));

}