/*
Problem:
Write a program to print Ceil of numbers , don't use built in Ceil
function

Input:                        Input:
10.7                          -10.7

Output:                       Output:
My MyCeil Result : 11         My MyCeil Result : -10
C++ Ceil Result : 11          C++ Ceil Result: -10
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

int MyCeil(int number) {
	if (number > 0)
		return int(number) + 1;
	else
		return int(number);
}

int main() {
	float Number = ReadNumber();
	cout << "My MyFloor Result : " << MyCeil(Number) << endl;
	cout << "C++ floor Result  : " << ceil(Number) << endl;

	return 0;
}
