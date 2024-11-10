

#include <iostream>
using namespace std;

int main()
{
    float bill_value;
    cout << "********************* Service Fee %10  And Selos Tax %16 *******************" << endl;
    cout << "********************* Input Bill_Value  *******************" << endl;
    cout << "********************* Output Total_Bill *******************" << endl << endl;
    cout << "Please The Bill Valur..." << endl;
    cin >> bill_value;
    float total_bill = bill_value * 1.1;
    total_bill = total_bill * 1.16;
    cout << " The Total Bill = " << total_bill<< " ..."<<endl;
}

