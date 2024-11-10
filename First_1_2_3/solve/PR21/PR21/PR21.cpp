
#include <iostream>
using namespace std;


int main()
{
    const float PI = 3.14;
    float l;
    cout << "*********************  Calcolate Circle  Area  L ***************************** \n\n";
    cout << "Please Enter L " << endl;
    cin >> l;
    float area = (l * l) / (PI * 4);
    cout << "The Area = " << area << endl;
}
