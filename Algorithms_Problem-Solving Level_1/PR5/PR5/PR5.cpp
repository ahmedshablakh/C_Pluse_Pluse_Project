#include<iostream>
using namespace std;
struct stInfo
{
	int Age;
	bool HasDrivingLicense;
	bool HasRecommendatio;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "please Enter Your Age?." << endl;
	cin >> Info.Age;

	cout << "please Enter Your Driver License?." << endl;
	cin >> Info.HasDrivingLicense;

	cout << "please Enter Your Recommendatio?." << endl;
	cin >> Info.HasRecommendatio;

	return Info;
}
bool InAccepted(stInfo Info)
{

	if (Info.HasRecommendatio)
	{
		return true;
	}
	
	else
	{
		return(Info.Age > 21 && Info.HasDrivingLicense);
	}
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