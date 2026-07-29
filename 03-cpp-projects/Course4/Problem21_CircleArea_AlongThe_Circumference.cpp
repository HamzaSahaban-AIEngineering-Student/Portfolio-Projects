/*
Problem:
Write a program to calculate circle area along the circumference, then print it on the screen.

Formula: Area = (L^2) / (4 * PI)

The user should enter:
L (circumference)

Example Inputs:
20

Outputs:
31.831
*/
#include <iostream>
using namespace std;

float ReadCircumference() {
	float L;
	cout << "Enter The circumference: " << endl;
	cin >> L;
	return L;
}

float CircleAreaAlongTheCircumference(float L) {
	const float PI = 3.141592653589793238;
	float Area = pow(L, 2) / (4 * PI);
	return Area;
}

void PrintResults(float Area) {
	cout << "The area is : " << Area << endl;
}

int main() {
	PrintResults(CircleAreaAlongTheCircumference(ReadCircumference()));
	return 0;
}