#include <iostream>
using namespace std;
float Total_Seconds(float Days ,float Hours,float Minutes ,float Seconds)
{

	float total_Seconds = Days * 24 * 60 * 60 + Hours * 60 * 60 + Minutes * 60 + Seconds;
	return total_Seconds;
}
int main() {
	float Days, Hours, Minutes, Seconds;
	cout << "*************************** Task Duration InSeconds ********************" << endl;
	cout << "*************************** INPUT Days of Hours of Minutes of Seconds	********************" << endl;
	cout << "Please enter the Days" << endl;
	cin >> Days;
	cout << "<Please enter the Hours" << endl;
	cin >> Hours;
	cout << "<Please enter the Minutes" << endl;
	cin >> Minutes;
	cout << "<Please enter the Seconds" << endl;
	cin >> Seconds;
	 
	cout << "Thr Total is = " << Total_Seconds(Days, Hours, Minutes, Seconds) << " Seconds" << endl;
}