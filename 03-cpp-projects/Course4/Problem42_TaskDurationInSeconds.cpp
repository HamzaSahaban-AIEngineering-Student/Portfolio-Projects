/*
Problem:
Write a program to calculate the task duration in seconds and print it on screen.
-> Given the time duration of a task in the number of days, hours, minutes, and seconds.

Input:
2 (Days)
5 (Hours)
45 (Minutes)
35 (Seconds)

Outputs ->
193,535 Seconds
*/


#include <iostream>
using namespace std;

struct strTaskDuration {
	int NumberOfSeconds, NumberOfMinutes, NumverOfHours, NumberOfDays;
};

int ReadPositiveNumber(string Message) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

strTaskDuration ReadTaskDuration() {
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter The Number Of Days? ");
	TaskDuration.NumverOfHours = ReadPositiveNumber("Please Enter The Number oF Hours? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter The Number Of Minutes? ");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter The Number Of Seconds? ");
	return TaskDuration;
}

int TaskDurationIntoSeconds(strTaskDuration TaskDuration) {
	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumverOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;
	return DurationInSeconds;
}

int main() {
	int Duration= TaskDurationIntoSeconds(ReadTaskDuration());
	cout << "\nThe Duration In Seconds = " << Duration << endl;

	return 0;
}