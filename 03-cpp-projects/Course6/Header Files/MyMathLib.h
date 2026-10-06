//
// Created by User on 5/10/26.
//

#pragma once

#include <iostream>
using namespace std;
#include <cmath>

namespace MyMathLib {
    int Sum2Numbers(int n1, int n2) {
        return n1 + n2;
    }

    int divide2Numbers(int n1, int n2){
        return n1 / n2;
    }
    int multibly2Numbers(int n1, int n2) {
        return n1 * n2;
    }
    int sub2Numbers(int n1, int n2) {
        return n1 - n2;
    }
    int MyPower(int Base, int Power) {
        if (Power == 0) {
            return 1;
        }else {
            return (Base * MyPower(Base, Power -1));
        }
    }
}