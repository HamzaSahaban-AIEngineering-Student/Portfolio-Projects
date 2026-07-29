/*
Problem:
Write a program to ask the user to enter:
- TotalSales

The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage to use of the following:
- > 1,000,000      -> Percentage is 1%
- > 500K to 1M     -> Percentage is 2%
- > 100K - 500K    -> Percentage is 3%
- > 50K to 100K    -> Percentage is 5%
- Otherwise        -> Percentage is 0%

Example Inputs:
110,000

Outputs:
3,300
*/
#include <iostream>
using namespace std;

float ReadTotalSales() {
	float TotalSales;
	cout << "Enter Your Totla Sales: " << endl;
	cin >> TotalSales;
	return TotalSales;
}

float GetCommissionPersentage(float TotalSales) {
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}

float CalculateTotalCommission(float TotalSales) {
	return TotalSales * GetCommissionPersentage(TotalSales);
}

int main() {
	float TotalSales = ReadTotalSales();

	cout << "Commission Persentage is : " << GetCommissionPersentage(TotalSales) * 100 << "%" << endl;

	cout << "TotalCommission is : " << CalculateTotalCommission(TotalSales);
}





