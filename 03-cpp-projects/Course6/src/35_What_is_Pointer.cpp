#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 30;
    cout << a << endl;
    cout << &a << endl;

    int *p;
    p = &a;
    p = &b;
    cout << p;
}