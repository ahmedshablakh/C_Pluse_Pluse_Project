#include<iostream>
using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};
int ReadPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
	strTaskDuration TaskDuration;
	const int SecondsPerDat = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDat);
	Remainder = TotalSeconds % SecondsPerDat;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;
	return TaskDuration;

}

void PrintTaskDurationDetails(strTaskDuration TaskDurstion)
{
	cout << endl;
	cout << TaskDurstion.NumberOfDays << " : "
		<< TaskDurstion.NumberOfHours << " : "
		<< TaskDurstion.NumberOfMinutes << " : "
		<< TaskDurstion.NumberOfSeconds << endl;

}
int main()
{

	int TotalSecond = ReadPositiveNumber("Please Enter Total Seconds?");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSecond));


	return 0;
}