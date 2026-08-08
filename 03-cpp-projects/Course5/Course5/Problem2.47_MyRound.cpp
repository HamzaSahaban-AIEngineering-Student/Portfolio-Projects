/*
Problem:
Write a program to print round of numbers , don't use built in
round function

Input:                        Input:                        Input:
10.7                          10.3                          -10.7

Output:                       Output:                       Output:
My Round Result : 11          My Round Result : 10          My Round Result : -11
C++ Round Result: 11          C++ Round Result: 10          C++ Round Result: -11
 */

#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber() {
	float number;
	cout << "\nPlease Enter a number :\n";
	cin >> number;
	return number;
}

float GetFractionPart(float Number) {
	return Number - int(Number);
}

int MyRound(float Number) {
	int intPart = int(Number);
	float FractionPart = GetFractionPart(Number);

	if (abs(FractionPart >= .5)) {
		if (Number > 0)
			return ++intPart;
		else
			return --intPart;
	}
	return intPart;
}

int main() {
	float Number = ReadNumber();
	cout << "\nMy Round :" << MyRound(Number);
	cout << "\nC++ Round  :" << round(Number);
	return 0;
}
