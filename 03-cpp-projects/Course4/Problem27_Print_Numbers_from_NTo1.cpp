#include <iostream>
using namespace std;

int ReadN() {
	int Number;
	cout << "Enter the number" << endl;
	cin >> Number;
	return Number;
}

void PrintRangeFrom1toN_usingFor(int Number) {
	for (int count = Number; count >= 1; count--) {
		cout << count << endl;
	}
	cout << "=============================" << endl;
}

int main() {
	PrintRangeFrom1toN_usingFor(ReadN());
	return 0;
}
