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


bool Is_Number_In_Matrix(int arr[3][3], int num, int rows, int cols) {
    for (short i = 0; i < rows; i++) {
        for (short j = 0; j < cols; j++) {
            if (arr[i][j] == num)
                return true;
        }
    }
    return false;
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 0, 0},{0, 3, 0}, {0, 0, 3}};
    int arr2[3][3] = {{1, 2, 3}, {1, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr2, 3, 3);
    int num;
    cout << "Enter a number to search for : ";
    cin >> num;
    if (Is_Number_In_Matrix(arr2, num, 3, 3)) {
        printf("Yes, %d is in matix\n", num);
    }else {
        printf("No, %d is not in matrix\n", num);
    }

}

int main() {
    PrintResults();
}
