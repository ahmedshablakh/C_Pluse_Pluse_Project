
#include <iostream>
using namespace std;


float Circle_arya(float d)
{
	const float PI = 3.14;
	float Circle_arya = (PI * d * d)/4;
	return Circle_arya;
}

int main()
{
	cout << "In order to calculate the area of a Circle through diameter" << endl;
	cout << "In order to calculate the area of a Circle Please enter diameter D " << endl;
	float d;
	cin >> d;
	cout << "The area to a Circle = " << Circle_arya(d) << endl;
}
