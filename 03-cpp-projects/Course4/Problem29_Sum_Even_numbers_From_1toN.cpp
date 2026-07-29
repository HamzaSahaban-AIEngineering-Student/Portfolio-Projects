#include <iostream>
using namespace std;

enum enEvenOrOdd { Even = 1, Odd = 2 };

int ReadNumber() {
	int number;
	cout << "Please enter a number: " << endl;
	cin >> number;
	return number;
}

enEvenOrOdd CheckEvenOrOdd(int number) {
	if (number % 2 == 0)
		return enEvenOrOdd::Even;
	else
		return enEvenOrOdd::Odd;

}

int SumOfEvenNumbersFrom1ToN_UsingForLoop(int number) {
	int sum = 0;
	for (int counter = 1;counter <= number;counter++) {
		if (CheckEvenOrOdd(counter) == enEvenOrOdd::Even) {
			sum += counter;
		}
	}
	return sum;
}

void PrintResults(int sum) {
	cout << "The sum of the numbers is : " << sum << endl;
}

int main() {
	PrintResults(SumOfEvenNumbersFrom1ToN_UsingForLoop(ReadNumber()));
	return 0;
}