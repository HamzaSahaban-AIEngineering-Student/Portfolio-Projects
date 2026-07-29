#include <iostream>
using namespace std;

int ReadN() {
	int Number;
	cout << "Enter A Number: " << endl;
	cin >> Number;
	return Number;
}

void PrintRangeFrom1toN_usingWhile(int Number) {
	int count = 0;
	while (count < Number) {
		count++;
		cout << count << endl;
	}
	cout << "===============================" << endl;

}
void PrintRangeFrom1toN_usingDoWhile(int Number) {
	int count = 0;
	do {
		count++;
		cout << count << endl;
	} while (count < Number);
	cout << "===============================" << endl;

}

void PrintRangeFrom1toN_usingFor(int Number) {
	for (int count = 1; count <= Number; count++) {
		cout << count << endl;
	}
	cout << "===============================" << endl;

}

int main() {
	int N = ReadN();
	PrintRangeFrom1toN_usingWhile(N);
	PrintRangeFrom1toN_usingDoWhile(N);
	PrintRangeFrom1toN_usingFor(N);
	return 0;
}
