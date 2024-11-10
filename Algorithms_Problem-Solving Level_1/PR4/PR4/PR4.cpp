#include<iostream>
using namespace std;
struct stInfo
{
	int Age;
	bool HasDrivingLicense;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "please Enter Your Age?." << endl;
	cin >> Info.Age;

	cout << "please Enter Your Driver License?." << endl;
	cin >> Info.HasDrivingLicense;
	return Info;
}
bool InAccepted(stInfo Info)
{
	return(Info.Age > 21 && Info.HasDrivingLicense);
}
void PrintResult(stInfo Info)
{
	if (InAccepted(Info))
		cout << "\n Hired " << endl;
	else
		cout << "\n Rejected" << endl;

}
int main()
{
	/* Unit Testing */
	PrintResult(ReadInfo());
}