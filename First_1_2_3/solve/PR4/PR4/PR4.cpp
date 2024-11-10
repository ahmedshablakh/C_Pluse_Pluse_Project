#include<iostream>
using namespace std;

int main()
{
	short Age;
	bool Driver_license;
	cout << "Please enter Age " << endl;
	cin >> Age;
	cout << "Please Driver_license enter 1 Other Wise 0 " << endl;
	cin >> Driver_license;
	if (Age > 21 && Driver_license == true)
	{
		cout << "Hired ..." <<endl;
	}
	else
	{
		cout << "Rejected .." <<endl;
	}
}