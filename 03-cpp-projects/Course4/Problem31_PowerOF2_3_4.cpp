#include <iostream>
using namespace std;

int ReadNumber() {
	int N;
	cout << "Please enter a number: " << endl;
	cin >> N;
	return N;
}

void PowerOF2_3_4(int Number) {
	int A, B, C;
	A = Number * Number;
	B = Number * Number * Number;
	C = Number * Number * Number * Number;
	cout << A << " " << B << " " << C << endl;
}

int main() {
	PowerOF2_3_4(ReadNumber());
	return 0;
}