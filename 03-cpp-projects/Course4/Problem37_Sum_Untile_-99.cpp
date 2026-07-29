/*
Problem:
Write a program to read numbers from user and sum them, keep reading until the user enters -99 then print the Sum on screen.

Input:
10
20
30
40
-99

Outputs:
100
*/

#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message) {
	float Number;
	cout << Message << endl;
	cin >> Number; 
	return Number;
}

float SumNumbers() {
	int Sum = 0, Number = 0, Counter = 1;
	do {
		Number = ReadNumber("Please Enter Number " + to_string(Counter));
		if (Number == -99)
			break;
		Sum += Number;
		Counter++;
	} while (Number != -99);
	return Sum;
}


int main() {
	cout << "Result = " << SumNumbers() << endl;
	return 0;
}