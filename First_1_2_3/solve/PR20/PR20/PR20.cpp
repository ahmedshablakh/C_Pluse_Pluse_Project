
#include <iostream>
using namespace std;


int main()
{
    const float PI = 3.14;
    float a;
    cout << "*********************  Calcolate Circle  Area  A ***************************** \n\n";
    cout << "Please Enter A " << endl;
    cin >> a;
    float area = (PI * a * a) / 4;
    cout << "The Area = " << area << endl;
}
