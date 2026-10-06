//
// Created by User on 5/10/26.
//

#include <iostream>
#include "MyLib.h"
#include "MyInputLib.h"
using namespace MyLib;
using namespace MyInputLib;
using namespace std;

int main() {
    Test();

    cout << Sum2Numbers(2, 3) << endl;
    int number = ReadNumber();
    cout << number;
}
