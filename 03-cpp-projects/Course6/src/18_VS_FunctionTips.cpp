#include <iostream>
using namespace std;

// use "Command D " to go to Definition
// use " option command <- " to go back to the main
// also you " command D " to go to declaration
// to find all references "usages"  " Shift command R"
// for peek definition or "Quick definition" just press "command Y "
// To rename the function put the cursor on it and press F2



void Function2();

void Function4() {
    cout << "Hi, I'm Function 4 :) " << endl;
}

void Function3() {
    Function4();
}


void Function1() {
    Function2();
    Function4();
}






















int main() {
    Function1();
    return 0;
}
void Function2() {
    Function3();
}
