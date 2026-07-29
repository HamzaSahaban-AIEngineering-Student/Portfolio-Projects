/*
Problem:
Write a program to calculate circle area circle described around an arbitrary triangle, then print it on the screen.

Formulas:
p = (a + b + c) / 2
Area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2)

The user should enter:
a
b
c

Example Inputs:
5
6
7

Outputs:
40.088
*/

#include <iostream>
using namespace std;

void ReadValues(float& A, float& B, float& C) {
	cout << "Enter Triangle Side A: " << endl;
	cin >> A;
	cout << "Enter Triangle Base B: " << endl;
	cin >> B;
	cout << "Enter Triangle Side C: " << endl;
	cin >> C;
}

float CalculateCircleAreaByATriangle(float A, float B, float C) {
	// Area = PI * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2)
	const float  PI = 3.141592653589793238;
	float P = (A + B + C) / 2;
	float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	float Area = PI * pow(T, 2);
	return Area;
}

void PrintResults(float Area) {
	cout << "The Area of The Circle is : " << Area << endl;
}

int main() {
	float A, B, C;
	ReadValues(A, B, C);
	PrintResults(CalculateCircleAreaByATriangle(A, B, C));
	return 0;
}