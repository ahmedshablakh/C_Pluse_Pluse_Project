#include<iostream>
using namespace std;
void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please enter Num 1 ? \n";
	cin >> Num1;
	cout << "Please enter Num 2 ? \n";
	cin >> Num2;
	

}
void PrintNumbers(int Num1,int Num2)
{
	cout << "\n *******************\n";
	cout << "The Num 1 is : " << Num1 << endl;
	cout << "The Num 2 is : " << Num2 << endl;
	cout << "\n *******************\n";

}
void Swap(int& Num1, int& Num2)
{
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;
}
int main()
{

	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);



}