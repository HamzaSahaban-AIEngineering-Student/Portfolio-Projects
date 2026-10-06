#include <iostream>
using namespace std;
// when you type static before declaring the variable. the compiler with save the value.
void MyFunc() {
    static int n = 1;
    cout << "Value of n = " << n << endl;
    n++;
}

int main() {
    MyFunc();
    MyFunc();
    MyFunc();
    
}