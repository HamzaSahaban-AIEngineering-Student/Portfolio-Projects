#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char name[] = "HAMZA A H SHABAN";
    char SchoolName[] = "Singapore Management University";

    // print string and string
    printf("Dear %s, How are you?\n\n", name);
    printf("Welcome to %s!\n\n", SchoolName);

    char C = 'S';
    printf("Sitting the width of C : %*c\n", 1, C);
    printf("Sitting the width of C : %*c\n", 2, C);
    printf("Sitting the width of C : %*c\n", 3, C);
    printf("Sitting the width of C : %*c\n", 4, C);

    return 0;
}