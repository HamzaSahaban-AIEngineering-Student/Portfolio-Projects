// write a programme to check the number is even or odd

#include <iostream>
using namespace std;

enum enNumberTybe {Even=1, Odd=2};

int ReadNumber() {
	int Num;
	cout << "Enter a Number: ";
	cin >> Num;
	return Num;
}

enNumberTybe CheckNumberTybe(int Num) {
	int result = Num % 2;
	if (result == 0)
		return enNumberTybe::Even;
	else
		return enNumberTybe::Odd;
}

void PrintNumberTybe(enNumberTybe numberTybe) {
	if (numberTybe == enNumberTybe::Even)
		cout << "The number is Even! ";
	else
		cout << "The number is Odd! ";
}

int main() {
	PrintNumberTybe(CheckNumberTybe(ReadNumber()));
	return 0;
}

