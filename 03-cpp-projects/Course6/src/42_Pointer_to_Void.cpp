#include <iostream>
using namespace std;

int main() {
    void *ptr;
    float f1 = 10.5;
    int x = 5;
    ptr = &f1;
    cout << ptr << endl;


    // cout << *ptr << endl;  // error. cuz the pointer type is not known
    cout << *(static_cast<float*>(ptr)) << endl;

    ptr = &x;
    cout << ptr << endl;
    cout << *(static_cast<int*>(ptr)) << endl;

    return 0;
}