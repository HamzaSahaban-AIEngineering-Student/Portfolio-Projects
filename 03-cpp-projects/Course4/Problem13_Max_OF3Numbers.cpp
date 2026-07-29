// Write a programme to display the max of three numbers 
#include <iostream>
#include <cmath>
using namespace std;

void ReadNumbers(int& num1, int& num2, int& num3) {
	cout << "Enter The first Number:" << endl;
	cin >> num1;
	cout << "Enter the second Number: " << endl;
	cin >> num2;
	cout << "Enter the third Number: " << endl;
	cin >> num3;
}

int MaxOf2Numbers(int num1, int num2, int num3) {
	if (num1 > num2)
		if (num1 > num3)
			return num1;
		else
			return num3;
	else
		if (num2 > num3)
			return num2;
		else
			return num3;
}


void PrintResults(int Max) {
	cout << "The max number is : " << Max << endl;
}

int main() {
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(MaxOf2Numbers(num1, num2, num3));
	return 0;
}
