#include<iostream>
using namespace std;

int main()
{
	float x[3];
	cout << "Please entrer num1.. " << endl;
	cin >> x[0];
	cout << "Please entrer num2.. " << endl;
	cin >> x[1];
	cout << "Please entrer num3.. " << endl;
	cin >> x[2];
	float avg = (x[0] + x[1] + x[2]) / 3;
	cout << avg << endl;


}