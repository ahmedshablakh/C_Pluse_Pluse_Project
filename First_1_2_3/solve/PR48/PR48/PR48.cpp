#include <iostream>
using namespace std;
int main() {
	float MPayment, How_Mony_Months;
	cout << "*************************** Monthly Loan Lnstlment  ********************" << endl;
	cout << "*************************** INPUT LoaAmount How Mony Months ********************" << endl;
	cout << "Please enter the LoaAmount "<<endl;
	cin >> MPayment;
	cout << "Please enter the How Mony Months " << endl;
	cin >> How_Mony_Months;
	cout << MPayment / How_Mony_Months <<" Monthly" << endl;
}