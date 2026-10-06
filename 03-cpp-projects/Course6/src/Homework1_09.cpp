/*
 use ternary operator
    programme to check if number positive or negative
*/

#include <iostream>
using namespace std;

int main() {
    int number = -1;
    string result;
    result = (number > 0) ? "Positive" : "Negative";
    cout <<"Number is "<<  result << endl;
}