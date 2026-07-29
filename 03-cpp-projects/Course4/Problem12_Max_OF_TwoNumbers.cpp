// Write a programme to display the max of two numbers 
#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(int& num1, int& num2) {
	cout << "Enter The first Number:" << endl;
	cin >> num1;
	cout << "Enter the second Number: " << endl;
	cin >> num2;
}

int MaxOf2Numbers(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

void PrintResults(int Max) {
	cout << "The max number is : " << Max << endl;
}

int main() {
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintResults(MaxOf2Numbers(num1, num2));
	return 0;
}