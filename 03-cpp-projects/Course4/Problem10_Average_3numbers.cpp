// Write a programme to calculate the average of three numbers 

#include <iostream>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3) {
	cout << "Enter the first number: " << endl;
	cin >> num1;
	cout << "Enter the second number:" << endl;
	cin >> num2;
	cout << "Enter the third number: " << endl;
	cin >> num3;
}

int SumOf3Numbers(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}

float averageOf3Numbres(int num1, int num2, int num3) {
	return (float)SumOf3Numbers(num1, num2, num3) / 3;
}

void PrintResults(float average) {
	cout << "The average of the numbers is : " << average << endl;
}

int main() {
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(averageOf3Numbres(num1, num2, num3));
	return 0;
}
