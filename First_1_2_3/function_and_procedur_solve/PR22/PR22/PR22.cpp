#include <iostream>
using namespace std;


float Circle_arya(float a, float b)
{
	const float PI = 3.14;
	float Circle_arya = ((PI * b * b )/4)*((2*a-b)/(2*a+b));
	return Circle_arya;
}

int main()
{
	cout << "In order to calculate the area Inscribed The riangle Please enter a , b " << endl;
	float a,b;
	cin >> a>>b;
	cout << "The area to a Circle = " << Circle_arya(a,b) << endl;
}
