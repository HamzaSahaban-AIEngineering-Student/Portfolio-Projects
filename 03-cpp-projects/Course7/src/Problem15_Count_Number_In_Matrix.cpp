#include <iostream>
#include <iomanip>
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


short Count_Number_In_Matrix(int arr[3][3], int num, int rows, int cols) {
    short Count = 0;
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (arr[i][j] == num)
                Count++;
        }
    }
    return Count;
}


void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 0, 0},{0, 3, 0}, {0, 0, 3}};
    int arr2[3][3] = {{1, 2, 3}, {1, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr2, 3, 3);
    int num;
    cout << "\nEnter The Number To Count In Matrix: ";
    cin >> num;
    // cout << "Number " << num << " Count in Matrix is: " << Count_Number_In_Matrix(arr1, num, 3, 3) << endl;
    printf("Number %d Count In Marix Is: %d \n", num, Count_Number_In_Matrix(arr2, num, 3, 3));





}

int main() {
    PrintResults();
}
