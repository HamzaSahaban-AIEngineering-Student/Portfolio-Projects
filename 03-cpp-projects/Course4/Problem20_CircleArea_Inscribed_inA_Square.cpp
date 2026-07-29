/*
Problem:
Write a program to calculate Circle area inscribed in a square, then print it on the screen.

Formula: Area = (PI * A^2) / 4

The user should enter:
A (square side length)

Example Inputs:
10

Outputs:
78.54
*/

#include <iostream>
using namespace std;

float ReadSquareSide() {
	float A;
	cout << "Enter The square side A: " << endl;
	cin >> A;
	return A;
}

float CircleAreaInscribedInASquare(float A) {
	const float PI = 3.141592653589793238;
	float Area = (PI * pow(A, 2)) / 4;
	return Area;
}

void PrintResults(float Area) {
	cout << "The Area is : " << Area << endl;

}

int main() {
	PrintResults(CircleAreaInscribedInASquare(ReadSquareSide()));
	return 0;
}
