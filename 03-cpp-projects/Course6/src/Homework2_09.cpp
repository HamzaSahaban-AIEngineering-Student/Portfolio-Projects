/*
 use ternary operator:
 programme to check number is positive, negative or zero using nested ternary operator
 */

#include <iostream>
using namespace std;

int main() {
 int number = -1;
 string result;
 result = (number == 0) ? "Zero" : (number > 0) ? "Positive" : "Negative";
 cout << result << endl;
}