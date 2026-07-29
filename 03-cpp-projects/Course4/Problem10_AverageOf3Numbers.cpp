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
void PrintResults(int Total) {
	cout << "The total sum of the numbers is : " << Total << endl;
}
int main() {
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(SumOf3Numbers(num1, num2, num3));
	return 0;
}