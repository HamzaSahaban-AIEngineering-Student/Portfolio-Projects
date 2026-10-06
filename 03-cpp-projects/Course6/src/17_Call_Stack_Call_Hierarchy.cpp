#include <iostream>
using namespace std;

// to view call stack/hierarchy. put the cursor on the name of the function and then pres control option H

void Function4() {
    cout << "Hi, I'm Function 4 :) " << endl;
}

void Function3() {
    Function4();
}

void Function2() {
    Function3();
}

void Function1() {
    Function2();
}

int main() {
    Function1();
    return 0;
}