// Write a programme that swap two numbers 
#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2) {
	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number: " << endl;
	cin >> num2;
}

void Swap(int& num1, int& num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void PrintResults(int num1, int num2) {
	cout << "Number 1 is : " << num1 << endl;
	cout << "Number 2 is : " << num2 << endl;
}

int main() {
	int num1, num2;
	ReadNumbers(num1, num2);
	PrintResults(num1, num2);
	Swap(num1, num2);
	PrintResults(num1, num2);
	return 0;
}