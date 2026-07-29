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
	int counter = 3;
	do {
		counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234") {
			return true;
		}
		else {
			system("color 4F");
			cout << "\nWrong PIN, You Have " << counter << " Times !";
		}
	} while (counter >= 1 && PinCode != "1234");
	return 0;
}

int main() {
	if (LogIn()) {
		system("color 2F");
		cout << "Your Acount Balance Is : " << 7500 << endl;
	}
	else {
		cout << "\nYour Card Blocked, Call The Bank For Help! " <<endl;
	}
	return 0;
}
