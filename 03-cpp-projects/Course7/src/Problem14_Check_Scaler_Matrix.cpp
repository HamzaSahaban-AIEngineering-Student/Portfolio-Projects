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



bool Is_Identic_Mattix(int arr[3][3], int rows, int cols) {
    int FirstElement = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j && arr[i][j] != FirstElement) {
                return false;
            }else if (i != j && arr[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void PrintResults() {
    srand((unsigned)time(NULL));
    int arr1[3][3] = {{3, 0, 0},{0, 3, 0}, {0, 0, 3}};
    int arr2[3][3] = {{1, 2, 3}, {1, 3, 4}, {3, 2, 4}};
    PrintMatrix(arr1, 3, 3);

    if (Is_Identic_Mattix(arr1, 3, 3)) {
        cout << "Yes, its identity!\n";
    }else {
        cout << "No, its not identity!\n";
    }




}

int main() {
    PrintResults();
}
