

#include <iostream>
using namespace std;

int main()
{
    float   Pennis, Nickels, Dimes, Quarters, Dollars;
    cout << "********************* THE Calculate total Pennise and dollars and *******************" << endl;
    cout << "********************* Input Value the Pennis , Nickels , Dimes , Quarters , Dollaes *******************" << endl;
    cout << "********************* Output Value the Total_Pennis And Total_Dollars  *******************" << endl << endl;
        cout << "Please Enter The Pennis , Nickels , Dimes , Quarters , Dollars ;" << endl;
    cin >> Pennis >> Nickels >> Dimes >> Quarters >> Dollars;
    float Total_Pennis = Pennis * 1 + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
    float Total_Dollars = Total_Pennis / 100;
    cout << "The Total_Pennis  " << Total_Pennis<<endl;
    cout << "The Total_Dollars  " << Total_Dollars << endl;





}


