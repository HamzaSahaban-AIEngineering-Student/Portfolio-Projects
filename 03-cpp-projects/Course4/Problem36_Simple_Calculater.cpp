/*
Problem: Write a program to ask the user to enter : 
1. Number 1 
2. Number 2
3. Operation type

Then perform the calculation according to Operation Type as follows:
. "+" Add the two numbers 
. "-" Substract the two numbers 
. "*" Multiply the two numbers
. "/" Divide the two numbers

Example Inputs 
10 
20 
* 

Output
200

*/


#include <iostream>
using namespace std;

enum enOperationTypes { Add = '+', Substract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string message) {
	float Number = 0;
	cout << message << endl;
	cin >> Number;
	return Number;
}

enOperationTypes enReadOPType() {
	char OT = '+';
	cout << "Please enter operation type (+, -, *, /)" << endl;
	cin >> OT;
	return (enOperationTypes)OT;
}

float Calculate(float Number1, float Number2, enOperationTypes OpType) {
	switch (OpType) {
	case enOperationTypes::Add:
		return	Number1 + Number2;
	case enOperationTypes::Substract:
		return Number1 - Number2;
	case enOperationTypes::Multiply:
		return Number1 * Number2;
	case enOperationTypes::Divide:
		return Number1 / Number2;
	default :
		return Number1 + Number2;
	}
}

int main() {
	float Number1 = ReadNumber("Please enter The first Number: ");
	float Number2 = ReadNumber("Please enter The Second Number: ");
	enOperationTypes OT = enReadOPType();

	cout << "Result = " << Calculate(Number1, Number2, OT);
	return 0;
}