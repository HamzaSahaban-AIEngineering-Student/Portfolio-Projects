/*
Problem:
Write a program to read a TotalBill and CashPaid and calculate the remainder to be paid back.

Input:
20
50

Outputs:
30
*/
#include <iostream>
using namespace std;


float ReadPositiveNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float CalculateRemainder(float TotalPill, float TotalCassPaid) {
	return TotalCassPaid - TotalPill;
}

int main() {
	float TotalPill = ReadPositiveNumber("Please enter Total Pill: ");
	float TotalCashPaid = ReadPositiveNumber("Please enter the Total Cash paid: ");
	cout << "\nTotal Pill = " << TotalPill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;
	cout << "*********************************" << endl;
	cout << "Remainder = " << CalculateRemainder(TotalPill, TotalCashPaid) << endl;
	return 0;
}
