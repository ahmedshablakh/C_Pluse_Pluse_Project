#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Full_Name;
	string n1, n2;
	cout << "Please enter Full Name " << endl;
	getline(cin, Full_Name);
	cout << "Please enter number 1" << endl;

	cin >> n1;
	cout << "Please enter number 2 " << endl;
	cin >> n2;
	cout << "*******************************" << endl << endl;
	cout << "The Length of String is: " << Full_Name.length() << endl;
	cout << Full_Name[0] << Full_Name[2] << Full_Name[5] << Full_Name[10] << endl;
	cout << n1 + n2 << endl;
	cout << stoi(n1) * stoi(n2) << endl;

}