/*
Problem:
Write a program to calculate circle area then print it on the screen.

Formula: Area = PI * r^2

The user should enter:
r (radius)

Example Inputs:
5

Outputs:
78.54
*/

#include <iostream>
using namespace std;

float ReadValues() {
	float R;
	cout << "Enter The Radius R: " << endl;
	cin >> R;
	return R;
}


float CircleArea(float R) {
	const float PI = 3.141592653589793238;
	float Area = PI * pow(R, 2);
	return Area;
}
void PrintResults(float Area) {
	cout << "The Circle Area is : " << Area << endl;
}

int main() {
	PrintResults(CircleArea(ReadValues()));
	return 0;

}


