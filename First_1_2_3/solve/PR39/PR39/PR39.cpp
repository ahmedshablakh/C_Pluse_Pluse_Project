
#include <iostream>
using namespace std;

int main()
{
    int Cash_Bill, Total_Bill;
    cout << "********************* THE Pay Remainder *******************" << endl;
    cout << "********************* Input Value Cash_Bill And Total_Bill *******************" << endl;
    cout << "********************* Output Value the Remainder  *******************" << endl << endl;
    cout << "Please Enter The Total_Bill " << endl;
    cin >> Total_Bill;
    cout << "Please Enter The Cash_Bill " << endl;
    cin >> Cash_Bill;
    float Remainder = Cash_Bill - Total_Bill;
    cout << "The Remainder = " << Remainder << endl;


}