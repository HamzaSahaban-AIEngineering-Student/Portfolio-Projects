#include <iostream>
using namespace std;

int main() {
    // declare an int pointer
    int *ptrX;
    // declare a float pointer
    float *ptrY;

    // dynamically allocate memory
    ptrX = new int;
    ptrY = new float;

    // assigning value to the memory
    *ptrX = 20;
    *ptrY = 58.54;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    // deallocate the memory
    delete ptrX;
    delete ptrY;

    return 0;
}