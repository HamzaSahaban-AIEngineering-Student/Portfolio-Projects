/*
Problem:
Write a program to ask the user to enter:
- Number
- M

Then Print the Number^M

Example Inputs:
2
4

Outputs->
16
*/
#include <iostream>
using namespace std;

int ReadNumber() {
	int N;
	cout << "Please enter a number:" << endl;
	cin >> N;
	return N;
}

int ReadAPower() {
	int M;
	cout << "Enter the power: " << endl;
	cin >> M;
	return M;
}

int PowerOfM(int Number, int M) {
	if (M == 0)
		return 1;

	int p = 1;
	for (int i = 1;i <= M;i++) {
		p = p * Number;
	}
	return p;
}

int main() {
	cout << "The result is: " << PowerOfM(ReadNumber(), ReadAPower()) << endl;
	return 0;
}