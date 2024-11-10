#include<iostream>
using namespace std;

enum enPassFial {Pass = 1 , Fial = 2};
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
	return (float)sunOf3Marks(Mark1, Mark2, Mark3) / 3;
}
enPassFial CheckAverage(float Average)
{
	if (Average >= 50)
		return enPassFial::Pass;
	else 
		return enPassFial::Fial;

}
void PrintResulte(float Average)
{
	cout << "\n Your Average is : " << Average << endl;
	if (CheckAverage(Average) == enPassFial::Pass)
		cout << "\n Your Passed." << endl;
	else 
		cout << "\n Your Fiald." << endl;
}
int main()
{

	int Maek1, Mark2, Mark3;
	ReadMarks(Maek1, Mark2, Mark3);
	PrintResulte(CalculateAverage(Maek1, Mark2, Mark3));
}