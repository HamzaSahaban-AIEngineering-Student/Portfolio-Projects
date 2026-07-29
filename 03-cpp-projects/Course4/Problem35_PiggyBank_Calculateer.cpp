/*
Problem:
Write a program to ask the user to enter:
- Pennies, Nickels, Dimes, Quarters, Dollars

Then calculate the total pennies, total dollars and print them on screen giving that:
- Penny = 1
- Nickel = 5
- Dime = 10
- Quarter = 25
- Dollar = 100

Example Inputs:
5,5,5,5,5

Outputs:
705 Pennies
7.05 Dollars
*/

#include <iostream>
using namespace std;
struct stPiggyBankContent {
	int Penny, Nickel, Dime, Quarter, Dollar;
};

stPiggyBankContent ReadPiggyBankContent() {
	stPiggyBankContent PiggyBankContent;
	cout << "Enter the total number of pennies : " << endl;
	cin >> PiggyBankContent.Penny;
	cout << "Enter the total number of Nickels : " << endl;
	cin >> PiggyBankContent.Nickel;
	cout << "Enter the total number of Dimes : " << endl;
	cin >> PiggyBankContent.Dime;
	cout << "Enter the total number of Quarters : " << endl;
	cin >> PiggyBankContent.Quarter;
	cout << "Enter the total number of Dollars : " << endl;
	cin >> PiggyBankContent.Dollar;

	return PiggyBankContent;
}

int CalculateTotalPiggyBankContent(stPiggyBankContent PiggyBankContent) {
	int TotalPennies = PiggyBankContent.Penny * 1
		+ PiggyBankContent.Nickel * 5
		+ PiggyBankContent.Dime * 10
		+ PiggyBankContent.Quarter * 25
		+ PiggyBankContent.Dollar * 100;
	return TotalPennies;
}

int main() {
	int TotalPennies = CalculateTotalPiggyBankContent(ReadPiggyBankContent());
	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dolars = " << (float)TotalPennies / 100 << endl;
	return 0;
}
