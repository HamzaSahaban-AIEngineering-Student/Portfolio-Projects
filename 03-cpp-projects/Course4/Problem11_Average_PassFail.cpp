// write a programm to caclulate the average of 3 marks then print pass or fail.
#include <iostream>
using namespace std;

enum enPassFail {pass=1, fail=2};
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

enPassFail CheckAverage(float Average) {
	if (Average >= 50)
		return enPassFail::pass;
	else
		return enPassFail::fail;
}

void PrintResults(float Average) {
	cout << "Your average is : " << Average << endl;

	if (CheckAverage(Average) == enPassFail::pass)
		cout << "You Passed! " << endl;
	else
		cout << "You Failed! " << endl;

}

int main() {
	int num1, num2, num3;
	ReadNumbers(num1, num2, num3);
	PrintResults(averageOf3Numbres(num1, num2, num3));
	return 0;
}