#include <iostream>
using namespace std;
int main() {
	int SecondsPerDay = 24 * 60 * 60,
		SecondsPerHours = 60*60,
		SecondsPerMinute = 60,
		Remaider = 0,
		total_secondes,
		SecondsPerDay2,
		SecondsPerHours2 = 0,
		SecondsPerMinute2 = 0 ,
		secondes;

	cout << "Seconds To Days of Hours of Minuters Of Second "<< endl;
	cout << "Please Enter The Seconds Total " << endl;
	cin >> total_secondes;
	SecondsPerDay2 = floor(total_secondes / SecondsPerDay);
	Remaider = total_secondes % SecondsPerDay;
	SecondsPerHours2 = floor(Remaider / SecondsPerHours);
	Remaider = total_secondes % SecondsPerHours;
	SecondsPerMinute2= floor(Remaider / SecondsPerMinute);
	Remaider = total_secondes % SecondsPerMinute ;
	secondes = Remaider ;
	cout << SecondsPerDay2 << "::"<< SecondsPerHours2 <<" :: "<< SecondsPerMinute2 << " :: "<< secondes;




	
	

}