#pragma once
#include <iostream>
using namespace std;

namespace MyInputLib {

    int ReadNumber() {
        cout << "Please inter your number : \n";
        int Number;
        cin >> Number;
        return Number;
    }


}