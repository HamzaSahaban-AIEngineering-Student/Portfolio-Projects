#include <iostream>
using namespace std;

int ReadAge() {
	int A;
	cout << "Enter Your Age: " << endl;
	cin >> A;
	return A;
}

bool ValidateNumberInRange(int Number, int From, int To) {
	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To) {
	int Age = 0;
	do {
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, From, To));
	return Age;
}

void PrintResults(int Age) {
	cout << "Your Age is : " << Age << endl;
}

int main() {
	PrintResults(ReadUntilAgeBetween(18, 45));
	return 0;
}