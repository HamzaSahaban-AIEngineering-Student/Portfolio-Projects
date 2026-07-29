/*
Problem:
Write a program to calculate triangle area then print it on the screen.

Formula: Area = 0.5 * a * h

The user should enter:
a (base)
h (height)

Example Inputs:
10
8

Outputs:
40
*/
#include <iostream>
using namespace std;

void ReadValuse(float& A, float& H) {
	cout << "Please enter triangle base A : " << endl;
	cin >> A;
	cout << "Please enter triangle height H : " << endl;
	cin >> H;
}

float TraingleArea(float A, float H) {
	float Area = 0.5 * A * H;
	return Area;
}

void PrintResults(float Area) {
	cout << "\n The Traingle Area is : " << Area << endl;

}

int main() {
	float A, H;
	ReadValuse(A, H);
	PrintResults(TraingleArea(A, H));
	return 0;

}