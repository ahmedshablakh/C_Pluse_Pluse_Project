#include<iostream>
#include<string>
using namespace std;

int ReadNum()
{
	int Num;
	cout << "Please enter Num ..?" << endl;
	cin >> Num;
	return Num;
}
float calculateHalfNumber(int Num)
{ 
	return (float)Num / 2;
}
void PrintResult(int Num)
{
	
	//Concatenation				 //casting                  //casting
	string Result = "Half of " + to_string(Num) + " is " + to_string(calculateHalfNumber(Num));
	cout << endl << Result << endl;

}

int main()
{
	PrintResult(ReadNum());
}