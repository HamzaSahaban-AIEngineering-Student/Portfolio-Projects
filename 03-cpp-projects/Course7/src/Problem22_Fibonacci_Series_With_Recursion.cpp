//
// Created by User on 20/10/26.
//

#include <iostream>
using namespace std;

void PrintFibonacciNumberUsingRecursion(int number, int Prev2, int Prev1) {
    int FibNumber = 0;
    if (number > 0) {
        FibNumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = FibNumber;
        cout << FibNumber << "  ";
        PrintFibonacciNumberUsingRecursion(number - 1, Prev2, Prev1);
    }
}

int main() {
    PrintFibonacciNumberUsingRecursion(10, 0, 1);

}