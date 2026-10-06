//
// Created by User on 25/9/26.
//
/*
 * Step Into: Enters inside the function on the current line to debug it line by line.
        command f11
 * Step Over: Executes the current line completely (including any function calls) and moves to the next line.
        f10
 * Step Out : Finishes executing the current function and jumps back to the caller function.
         shift Command f11
*/


#include<iostream>
using namespace std;
int MySum(int a, int b)
{
    int s = 0;
    s = a + b;
    return s;
}
int main()
{
    int arr1[5] = { 200,100,50,25,30 };
    int a, b, c;
    a = 10;
    b = 20;
    a++;
    ++b;
    c = a + b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
        a = a + a * i;
    }
    c = MySum(a, b);
    cout << c;
    return 0;
}



