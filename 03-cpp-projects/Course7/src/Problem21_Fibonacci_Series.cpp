//
// Created by User on 13/10/26.
//
#include <iostream>
using namespace std;

void PrintFibonacci_Series_Using_Loop(short number) {
    int Fibnumber = 0;
    int Prev2 = 0, Prev1 = 1;
    cout << "1  ";
    for (short i = 2; i <= number; i++) {
        Fibnumber = Prev1 + Prev2;
        Prev2 = Prev1;
        Prev1 = Fibnumber;
        cout << Fibnumber << "  ";
    }
}

int main() {
    short number = 10;
    PrintFibonacci_Series_Using_Loop(number);
    return 0;
}