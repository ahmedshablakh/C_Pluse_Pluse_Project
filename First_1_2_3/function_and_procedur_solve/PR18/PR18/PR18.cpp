
#include <iostream>
using namespace std;


float Circle_arya(float r)
{
	const float PI = 3.14;
	float Circle_arya = PI * r * r;
	return Circle_arya;
}

int main()
{
	cout << "In order to calculate the area of a Circle Please enter R " << endl;
	float r;
	cin >> r;
	cout << "The area to a Circle = " << Circle_arya(r) << endl;
}
