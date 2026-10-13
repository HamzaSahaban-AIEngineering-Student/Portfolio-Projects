#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;


void PrintMatrix(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // cout << setw(3) << arr[i][j] << "   ";
            printf("%d   ", arr[i][j]);
        }
        cout << endl;
    }
}

int Min_Number_In_Matrix(int arr[3][3], int rows, int cols) {
    int min = INT_MAX; // // or we can assume that the first one is the min 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int Max_Number_In_Matrix(int arr[3][3], int rows, int cols) {
    int max = INT_MIN; // or we can assume that the first one is the max
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}


void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 44, 33},{110, 20, 44}, {22, 14, 4}};
    int arr2[3][3] = {{1, 2, 3}, {44, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr1, 3, 3);
    cout << endl;
    printf("Minimum Number in Matrix is : %d \n\n", Min_Number_In_Matrix(arr1, 3, 3));
    printf("Maximum Number in Matrix is : %d \n\n", Max_Number_In_Matrix(arr1, 3, 3));



}

int main() {
    PrintResults();
}
