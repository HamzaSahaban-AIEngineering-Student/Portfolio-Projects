/*
 * Problem:
 * Write a program to print floor of numbers , don't use built in
 * floor function
 *
 * Input:                        Input:                        Input:
 * 10.7                          10.3                          -10.3
 *
 * Output:                       Output:                       Output:
 * My MyFloor Result : 10        My MyFloor Result : 10        My MyFloor Result : -11
 * C++ floor Result : 10         C++ floor Result : 10         C++ floor Result : -11
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

int MyFloor(int number) {
	if (number > 0)
		return int(number);
	else
		return int(number) - 1;
}

int main() {
	float Number = ReadNumber();
	cout << "My MyFloor Result : " << MyFloor(Number) << endl;
	cout << "C++ floor Result  : " << floor(Number) << endl;

	return 0;
}