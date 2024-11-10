#include<iostream>
using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4,
	May = 5, Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10,
	Nov = 11, Dec = 12 };
int ReadNumberInRange(string Message, int From, int To)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number<From || Number>To);
	return Number;
}
enMonthOfYear ReadMonthOfYear()
{
	return (enMonthOfYear)ReadNumberInRange("Please enter a month [1 to 12] ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month)
{
	switch (Month)
	{
	case Jan:
		return "January";

	case Feb:
		return "February";
	case Mar:
		return "March";
	case Apr:
		return "April";
	case May:
		return "May";
	case Jun:
		return "Jun";
	case Jul:
		return "Julu";
	case Aug:
		return "August";
	case Sep:
		
		return "September";
	case Oct:
		return "October";
	case Nov:
		return "November";
	case Dec:
		return "December";
	default:
		return "Not a valid Month";
	}
}

int main()
{
	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;
	return 0;
}
