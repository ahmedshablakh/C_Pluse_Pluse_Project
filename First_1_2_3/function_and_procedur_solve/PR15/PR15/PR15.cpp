
#include <iostream>
using namespace std;
float Rectangle_arya(float a, float b)
{
	float area = a * b;
	return area;
}

int main()
{
	cout << "In order to calculate the area of a triangle Please enter a and b" << endl;
	float a , b;
	cin >> a >> b;
	 cout << "The area of a triangle = "<< Rectangle_arya(a,b)<< endl;
}
