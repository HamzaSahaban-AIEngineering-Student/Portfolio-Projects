/*
Problem:
Write a program to read a LoanAmount and ask you how many months you need to settle the loan, then calculate the monthly installment amount.

Input
5000
10

Outputs ->
500
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

float MonthlyPayment(float LoanAmount, float HowManyMonthToPay) {
	return (float)LoanAmount / HowManyMonthToPay;
}

int main() {
	float LoanAmount = ReadPositiveNumber("Enter The Loan Amount : ");
	float HowManyMonthToPay = ReadPositiveNumber("How Many Months To Pay ?: ");
	cout << "\nMonthly Payment = " << MonthlyPayment(LoanAmount, HowManyMonthToPay);
	return 0;
}