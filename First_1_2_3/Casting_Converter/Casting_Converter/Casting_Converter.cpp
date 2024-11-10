#include <iostream>
#include <string>
using namespace std;
int main()
{
	string st1 = "43.22";
	cout << stod(st1)<<endl;//convert string to double 
	cout << stof(st1) << endl; // convert string to float 
	cout << stoi(st1) << endl;  // convert string to float 
	int n1 = 20; 
	cout << to_string(n1) << endl;
	float n2 = 20; 
	cout << to_string(n2) << endl;
	double n3 = 20;
	cout << to_string(n3) << endl; 



}