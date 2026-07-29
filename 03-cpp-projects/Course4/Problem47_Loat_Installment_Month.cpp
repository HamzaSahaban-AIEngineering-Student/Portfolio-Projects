/*
Problem:
Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to settle the loan.

Input
5000
500

Outputs ->
10 Months
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

float TatalMonths(float LoanAmount, float MonthlyPayment) {
	return (float)LoanAmount / MonthlyPayment;
}

int main() {
	float LoanAmount = ReadPositiveNumber("Enter The Loan Amount: ");
	float MonthlyPayment = ReadPositiveNumber("Enter The Monthly Payment: ");

	cout << "\nTotal Months To Pay: " << TatalMonths(LoanAmount, MonthlyPayment);
	return 0;
}

