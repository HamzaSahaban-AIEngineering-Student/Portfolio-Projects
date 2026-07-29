/*
Problem:
Write a program to calculate circle area Inscribed in an Isosceles Triangle, then print it on the screen.

Formula: Area = PI * (b^2 / 4) * ((2 * a - b) / (2 * a + b))

The user should enter:
a (equal sides of the isosceles triangle)
b (base of the triangle)

Example Inputs:
20
10

Outputs:
47.124
*/
#include <iostream>
using namespace std;

void ReadValues(float& A, float& B) {
	cout << "Enter The value of the sides of the isosceles triangle: " << endl;
	cin >> A;
	cout << "Enter the value of the base of the triangle: " << endl;
	cin >> B;
}

float CalculateCircleAreaInscribedInIsoscelesTriangle(float A, float B) {
	const float PI = 3.141592653589793238;
	float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
	return Area;
}

void PrintResults(float Area) {
	cout << "The Area of the Circle is : " << Area << endl;
}

int main() {
	float A, B;
	ReadValues(A, B);
	PrintResults(CalculateCircleAreaInscribedInIsoscelesTriangle(A, B));
	return 0;
}