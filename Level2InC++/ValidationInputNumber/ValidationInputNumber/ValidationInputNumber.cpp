#include<iostream>
using namespace std;


int ReadNumber();

int MySum(int a, int b)
{
	return a + b;
}
int MySum(int a, int b,int c)
{
	return a + b + c;
}
int MySum(int a, int b, int c,int d)
{
	return a + b + c + d;
}

int Sum3Number(int Num1, int Num2 = 5, int Num3 = 0)
{
	return Num1 + Num2 + Num3;
}
int main()
{
	cout << "\t\t***************************************\n\n";
	cout << "          \t\tThis Projct Includes " << endl;
	cout << "			  \t\tValidate Number " << endl;
	cout << "			  \t\tBitWise Operatot 'And'& 'OR' |  " << endl;
	cout << "			  \t\tFunction Declaration Vs Definition " << endl;
	cout << "			  \t\tDefault Parameter  " << endl;
	cout << "			  \t\tFunction Overloading   " << endl;
	cout << "\n\t\t***************************************\n\n";

	cout << "   This Number is : " << ReadNumber() << endl;
	
	cout << "This Bitwise And Operater ..\n";
	cout << (12 & 25) << endl;
	cout << "This Bitwise Or Operater ..\n";
	cout << (12 | 25) << endl;

	cout << "This Default Paramaters : " << Sum3Number(2, 15) << endl;


	cout << "Function Overloading : " << MySum(2, 15)<< endl; 
	cout << "Function Overloading : " << MySum(2, 15,10) << endl;
	cout << "Function Overloading : " << MySum(2, 15,10,50) << endl;
	return 0;
}


int ReadNumber()
{
	int Num;
	cout << "Please enter your number .. " << endl;
	cin >> Num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid Number, Enter a valid one:" << endl;
		cin >> Num;
	}
	return Num;

}
