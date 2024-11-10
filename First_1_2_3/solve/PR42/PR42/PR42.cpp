#include <iostream>
using namespace std;
int main(){
	float Days , Hours , Minutes , Seconds ,total_Seconds;
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
	total_Seconds = Days*24*60*60+ Hours*60*60 + Minutes*60 + Seconds;
	cout << "Thr Total is = " << total_Seconds;



}