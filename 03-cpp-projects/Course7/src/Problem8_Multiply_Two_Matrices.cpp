#include <iostream>
#include <iomanip>
using namespace std;

/*
1. function to generate random numbers
2. function to fill 2D array with the random numbers
3. function to multiply 2 arrays
4. function to print matrix
*/

int RandomNumber(int From, int To) {
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short rows, short colomns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colomns; j++)
            arr[i][j] = RandomNumber(1, 100);
    }
}

void Multiply2Matrix(int arr3[3][3], int arr1[3][3], int arr2[3][3], int rows, int colomns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colomns; j++) {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void PrintMatrix(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(3) << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3], arr2[3][3], arrResult[3][3];
    FillMatrixWithRandomNumbers(arr1, 3, 3);
    cout << "\nMatrix 1: \n";
    PrintMatrix(arr1, 3, 3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix 2: \n";
    PrintMatrix(arr2, 3, 3);
    Multiply2Matrix(arrResult, arr1, arr2, 3, 3);
    cout << "\nResults: \n";
    PrintMatrix(arrResult, 3, 3);
}

int main() {
    PrintResults();
}