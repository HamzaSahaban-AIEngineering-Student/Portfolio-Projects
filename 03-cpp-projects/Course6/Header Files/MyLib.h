#pragma once

#include <iostream>
using namespace std;

namespace MyLib {
    void Test() {
        cout << "Hi, this my first function in this library!" << endl;
    }

    int Sum2Numbers(int n1, int n2) {
        return n1 + n2;
    }
}