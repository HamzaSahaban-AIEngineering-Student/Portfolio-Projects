/*
Problem:

Write a program to ask the user to enter:
- Month

Then print the day as follows:
- 1 Print January
- 2 Print February
- 3 Print March
- 4 Print April
- 5 Print May
- 6 Print June
- 7 Print July
- 8 Print August
- 9 Print September
- 10 Print October
- 11 Print November
- 12 December
- Otherwise print "Wrong Month" and ask the user to enter the Month again.

Example Inputs:
11

Outputs ->
November
*/

#include <iostream>
using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5,
	Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10,
	Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To) {
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);
	return Number;
}

enMonthOfYear ReadMonthOfYear() {
	return (enMonthOfYear)ReadNumberInRange("Please enter a month [1 to 12]: ", 1, 12);
}

string GetTheMonth(enMonthOfYear Month) {
	switch (Month) {
	case enMonthOfYear::Jan:
		return "January";
	case enMonthOfYear::Feb:
		return "February";
	case enMonthOfYear::Mar:
		return "March";
	case enMonthOfYear::Apr:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::Jun:
		return "June";
	case enMonthOfYear::Jul:
		return "July";
	case enMonthOfYear::Aug:
		return "August";
	case enMonthOfYear::Sep:
		return "September";
	case enMonthOfYear::Oct:
		return "October";
	case enMonthOfYear::Nov:
		return "November";
	case enMonthOfYear::Dec:
		return "December";
	default :
		return "Not A Month Of Year!! ";
	}

}

int main() {
	cout << GetTheMonth(ReadMonthOfYear());
	return 0;
}
