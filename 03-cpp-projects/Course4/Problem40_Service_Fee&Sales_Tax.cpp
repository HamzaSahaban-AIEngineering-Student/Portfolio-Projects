/*
Problem:
A restaurant charges 10% services fee and 16% sales tax.

Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the screen.

Input:
100

Outputs:
127.6
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

float TotalBillAfterServiceFeeAndSalesTax(float TotalBill) {
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;

}

int main() {
	float TotalBill = ReadPositiveNumber("Please Enter The Total Bill: ");
	cout << "\nTotal Bill is : " << TotalBill << endl;
	cout << "Total Bill After Service Fee And Sales Tax : " << 
		TotalBillAfterServiceFeeAndSalesTax(TotalBill) << endl;
	return 0;
}