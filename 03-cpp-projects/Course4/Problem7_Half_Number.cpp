// write a programme to print the half of the entered number 
#include <iostream>
#include <string>
using namespace std;

int ReadNumber() {
	int num;
	cout << "Enter A Number: ";
	cin >> num;
	return num;
}

float CalculateHalfNumber(int num) {
	return (float)num / 2;
}

void PrintResults(int num) {
	string result = "The Half of " + to_string(num) + " is " + to_string(CalculateHalfNumber(num));
	cout << endl << result << endl;
}

int main() {
	PrintResults(ReadNumber());
	return 0;
}