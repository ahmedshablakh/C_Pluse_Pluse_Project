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

strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter Number Of Days?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter Number Of Hours? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter Number Of Minutes?");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter Number Of Seconds?");
	return TaskDuration;


}
int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
	int DurationInSeconds = 0;
	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;
	return DurationInSeconds;
}
int main()
{


	cout << endl << "Task Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration());
	return 0;
}