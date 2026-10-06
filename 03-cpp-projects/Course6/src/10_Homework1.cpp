
// Using Recursion:
// programme to print numbers from m to n


#include <iostream>
using namespace std;

void PrintNumbers(int n, int m) {
    if (n <= m ) {
        cout << m << endl;
        PrintNumbers(n, m -1 );
    }
}

int main() {
    PrintNumbers(1, 10);
}