/*
Problem:
Write a program to print abs of numbers , don't use built in abs
function

Input:
-10

Output:
My abs Result : 10
C++ abs Result: 10
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

float MyABS(float number) {
	if (number > 0)
		return number;
	else
		return number * -1;
}

int main() {
	float Number = ReadNumber();
	cout << "\nMy abs result : " << MyABS(Number) << endl;
	cout << "\nC++ abs result : " << abs(Number) << endl;
}