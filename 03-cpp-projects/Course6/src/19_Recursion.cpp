#include <iostream>
using namespace std;

// avoid the stack overflow 

void PrintNumbers(int n1, int n2) {
    if (n1 <= n2) {
        cout << n1 << endl;
        PrintNumbers(n1 + 1, n2);
    }
}

int main() {
    PrintNumbers(1, 10);
    return 0;
}