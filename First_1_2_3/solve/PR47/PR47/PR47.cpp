#include <iostream>
using namespace std;
int main() {
	float MPayment, LoAmounte;
	cout << "*************************** Loan Lnstlment Months ********************" << endl;
	cout << "*************************** INPUT LoaAmount Monthly Payment ********************" << endl;
	cout << "Please enter the LoaAmount "<<endl;
	cin >> MPayment;
	cout << "Please enter the Monthly Payment " << endl;
	cin >> LoAmounte;
	cout << MPayment / LoAmounte <<" Month" << endl;
}