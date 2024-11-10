#include<iostream>
using namespace std;

int main()
{
	short day;
	cout << "Please enter Day.." << endl;
	cin >> day;
	if (day <=7 and day>=1) 
	{
		if (day == 1 )
		{
			cout << "Sunday.." << endl;
		}
		else if (day == 2)
		{
			cout << "Monday.." << endl;
		}
		else if (day == 3)
		{
			cout << "Tuesday.." << endl;
		}
		else if (day == 4)
		{
			cout << "Wedneday.." << endl;
		}
		else if (day == 5)
		{
			cout << "Thursday.." << endl;
		}
		else if (day == 6)
		{
			cout << "Friday.." << endl;
		}
		else if (day == 7)
		{
			cout << "Saturday.." << endl;
		}
	
	}
	else
	{
		cout << " Dayn Error..." << endl;
	}
	
}