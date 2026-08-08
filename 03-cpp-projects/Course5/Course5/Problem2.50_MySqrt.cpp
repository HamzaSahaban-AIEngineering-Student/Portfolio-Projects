/*
Problem: 
Write a program to print the sqrt of the number, don't use built in sqrt function

Input: 
25

Output:
My Sqrt Result : 5 
C++ Sqrt Result : 5 
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

float MySqrt(int number) {
	return pow(number, 0.5);
}

int main() {
	float number = ReadNumber();
	cout << "\nMy Sqrt result : " << MySqrt(number);
	cout << "\nC++ Sqrt result : " << sqrt(number);
	return 0;
}
