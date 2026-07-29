/*
Problem:
Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234, then show the balance to user, otherwise print "Wrong PIN" and ask the user to enter the PIN again.
Assume User Balance is 7500.

Input
1234

5151

Outputs ->
Your Balance is: 7500

Wrong PIN
*/

#include <iostream>
using namespace std;

string ReadPinCode() {
	string PinCode;
	cout << "Enter The Pin Code : \n";
	cin >> PinCode;
	return PinCode;
}

bool LogIn() {
	string PinCode;
	do {
		PinCode = ReadPinCode();
		if (PinCode == "1234")
			return 1;
		else {
			cout << "Wrong PIN\n";
			system("color 4F");
		}
	} while (PinCode != "1234");
	return 0;
}

int main() {
	if (LogIn()) {
		system("color 2F");
		cout << "Your Acount Balance Is : " << 7500 << '\n';
	}
	return 0;
}