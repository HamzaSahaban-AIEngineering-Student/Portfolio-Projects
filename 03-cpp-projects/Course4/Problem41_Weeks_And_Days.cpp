/*
Problem:
Write a program to read a NumberOfHours and calculates the number of weeks, and days included in that number

Input:
365

Outputs:
2.17 Weeks
15.20 Days
*/

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float HoursToDays(float NumberOfHours) {
	return (float)NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours) {
	return (float)NumberOfHours / 24 / 7;
}

float DaysToWeeks(float NumberOfDays) {
	return (float)NumberOfDays / 7;
}

int main() {
	float NumberOfHours = ReadPositiveNumber("Please Enter The Number Of Hours: ");
	float NumberOfDays = HoursToDays(NumberOfHours);
	float NumberOfWeeks = DaysToWeeks(NumberOfDays);
	cout << "\nTotal Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total Weeks = " << NumberOfWeeks << endl;
	return 0;
}