/*
Problem:
Write a program that inputs the number of seconds and changes it to days, hours, minutes, and seconds.

Input:
193,535

Output ->
2:5:45:35
*/

#include <iostream>
using namespace std;

struct strTaskDuration {
	int NumberOfSeconds, NumberOfMinutes, NumberOfHours, NumberOfDays;
};
 
int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds) {
	strTaskDuration TaskDuration;
	const int SecondsPerDay = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinute = 60;

	int Remainder = 0;
	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
	Remainder = TotalSeconds % SecondsPerDay;
	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;
	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
	Remainder = Remainder % SecondsPerMinute;
	TaskDuration.NumberOfSeconds = Remainder;
	return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration) {
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << endl;
}

int main() {
	int TotalSeconds = ReadPositiveNumber("Enter The number of Seconds: ");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
	return 0;
}
