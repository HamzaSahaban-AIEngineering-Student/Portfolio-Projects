/*
Problem:
Write a program to calculate rectangle area through diagonal and side area of rectangle 
and print it on the screen.

Formula: Area = a * sqrt(d^2 - a^2)

The user should enter:
a
d

Example Inputs:
5
40

Outputs:
198.431
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadValues(float& A, float& D) {
	cout << "Enter the Rectangle Side A: " << endl;
	cin >> A;
	cout << "Enter the Rectangle Diagonal D: " << endl;
	cin >> D;
}

float RectangleAreaByDiagonalAndSide(float A, float D) {
	float Area = A * sqrt(pow(D, 2) - pow(A, 2));
	return Area;
}

void PrintResults(float Area) {
	cout << "The Area Is: " << Area << endl;
	
}

int main() {
	float A, D;
	ReadValues(A, D);
	PrintResults(RectangleAreaByDiagonalAndSide(A, D));
	return 0;
}