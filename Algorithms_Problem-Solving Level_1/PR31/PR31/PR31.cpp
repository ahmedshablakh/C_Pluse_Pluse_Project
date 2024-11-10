#include<iostream>
using namespace std;

int ReadNumber()
{
	cout << "Please enter number ..?\n";
	int number;
	cin >> number;
	return number;

}

void PowerOf2_3_4(int number)
{
	int a, b, c;
	a = number * number;
	b = number * number * number;
	c = number * number * number * number;
	cout << a << " " << b << " " << c << endl;

}
int main()
{
	cout << "Enter Number Result is number pow 2 ,3 , 4 \n";
	PowerOf2_3_4(ReadNumber());
}