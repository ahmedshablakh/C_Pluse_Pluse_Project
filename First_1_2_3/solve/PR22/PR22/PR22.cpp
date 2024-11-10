
#include <iostream>
using namespace std;


int main()
{
    const float PI = 3.14;
    float a , b;
    cout << "*********************  Calcolate  Area  Inscribed Triangle ***************************** \n\n";
    cout << "Please Enter a , b  " << endl;
    cin >> a >> b ;
    float area = (PI* ( b*b/4)) * ((2*a-b)/(2*a+b));
    cout << "The Area = " << area << endl;
}
