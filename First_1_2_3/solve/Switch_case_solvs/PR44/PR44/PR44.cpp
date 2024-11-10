#include<iostream>
using namespace std;

int main()
{
	short day;
	cout << "Please enter Day.." << endl;
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Sunday.." << endl;
		break;
	case 2:
		cout << "Monday.." << endl;
		break;
	case 3:
		cout << "Tuesday.." << endl;
		break;
	case 4:
		cout << "Wedneday.." << endl;
		break;
	case 5:
		cout << "Thursday.." << endl;
		break;
	case 6:
		cout << "Friday.." << endl;
		break;
	case 7:
		cout << "Saturday.." << endl;
		break;

	default:
		cout << " Dayn Error..." << endl;
		break;
	}
	main();
	return 0;
}