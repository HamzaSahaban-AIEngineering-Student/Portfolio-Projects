#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char x;
    char y;

    x = toupper('a');
    y = tolower('A');
    cout << "Converting a to A: " << x << endl;
    cout << "Converting A to a: " << y << endl;

    cout << "isupper('A') " << isupper('A') << endl;
    cout << "islower('a') " << islower('a') << endl;

    cout << "isdigit(9) " << isdigit('9') << endl;
    cout << "uspunct(';') " << ispunct(';');
}