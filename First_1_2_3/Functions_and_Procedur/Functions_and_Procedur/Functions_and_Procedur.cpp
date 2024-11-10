#include <iostream>
#include<string>
using namespace std;
void Sum_Procedure()
{
	int Number1, Number2;
	cout << "Please enter Number1" << endl;
	cin >> Number1;
	cout << "Please enter Number2" << endl;
	cin >> Number2;
	cout << "*****************************" << endl;
	cout << Number1 + Number2 << endl;

}
int Sum_Functions()
{
	int Number1, Number2;
	cout << "Please enter Number1" << endl;
	cin >> Number1;
	cout << "Please enter Number2" << endl;
	cin >> Number2;
	cout << "*****************************" << endl;
	return Number1 + Number2;
}

int main() {

	Sum_Procedure();
	cout << Sum_Functions();

}