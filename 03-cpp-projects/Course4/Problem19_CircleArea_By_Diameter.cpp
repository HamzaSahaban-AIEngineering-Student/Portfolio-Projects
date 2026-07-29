/*
Problem:
Write a program to calculate circle area through diameter, then print it on the screen.

Formula: Area = (PI * D^2) / 4

The user should enter:
D (diameter)

Example Inputs:
10

Outputs:
78.54
*/

#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter() {
	float D;
	cout << "Please enter diameter D ? " << endl;
	cin >> D;
	return D;
}

float CircleAreaByDiameter(float D) {
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;
}

void PrintResults(float Area) {
	cout << "The Area of the circle is : " << Area << endl;
}

int main() {
	PrintResults(CircleAreaByDiameter(ReadDiameter()));
	return 0;
}