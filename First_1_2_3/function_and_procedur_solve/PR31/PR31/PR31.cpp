#include<iostream>
using namespace std;

void MyStructure()
{
	cout << " The Output a^2 a^3 a^4 ";
	cout << "Please enter Number \n";
	int num;
	cin >> num;
	int a, b, c;
	a = num * num;
	b = num * num * num;
	c = num * num * num * num;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

}
int main()
{

	MyStructure();


}