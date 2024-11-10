#include <iostream>
using namespace std;

enum enCountryChoice {
	India = 1, China = 2, United = 3, States = 4, Indonesia = 5, Pakistan = 6, Nigeria = 7};
	
int main()
{
    cout << "****************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) India\n";
    cout << "(2) China\n";
    cout << "(3) United\n";
    cout << "(4) States\n";
    cout << "(5) Indonesia\n";
    cout << "(6) Pakistan\n";
    cout << "(7) Other\n";
    cout << "****************************\n\n";
    cout << "Your Choice? ";
    short c;
    enCountryChoice Country;
    cin >> c;
    Country = (enCountryChoice) c;
    if (Country == enCountryChoice::India) {
        cout << "Your Country is: India " << endl;
    }
    else if (Country == enCountryChoice::China) {
        cout << "Your Country is: China "<< endl;
    }
    else if (Country == enCountryChoice::United) {
        cout << "Your Country is: United " << endl;
    }
    else if (Country == enCountryChoice::States) {
        cout << "Your Country is: States " << endl;
    }
    else if (Country == enCountryChoice::Indonesia) {
        cout << "Your Country is: Indonesia" << endl;
    }
    else if (Country == enCountryChoice::Pakistan) {
        cout << "Your Country is: Pakistan"  << endl;
    }
    else {
        cout << "Your Country is Other ..." << endl;
    }
    main();
    return 0;
    
}
