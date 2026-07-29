// write a programme to calculate the N!
#include <iostream>
using namespace std;

int ReadAPositiveNumber(string Message) {
	int number;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

int Factorial(int N) {
	int F = 1;
	for (int Counter = N; Counter >= 1; Counter--){
		F = F * Counter;
	}
	return F;
}

int main() {
	cout << Factorial(ReadAPositiveNumber("Enter A Positive Number : ")) << endl;
	return 0;

}