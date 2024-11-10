#include<iostream>
using namespace std;
enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, The = 6, Fri = 7 };
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

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter day number  Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, The = 6, Fri = 7 ", 1, 7);
}
string GerDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case Sat:
		return "Saturday";
	case Sun:
		return "Sunday";
	case Mon:
		return "Monday";
	case Tue:
		return "Tuesday";
	case Wed:
		return "Wednsday";
	case The:
		return "Thursday";
	case Fri:
		return "Friday";
	default:
		return "Not a valid Day";
	}
}

int main()
{

	cout << GerDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;

}