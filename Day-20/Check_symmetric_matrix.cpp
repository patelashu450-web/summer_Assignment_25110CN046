#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    if (rows != cols) {
        cout << "\nThe matrix is NOT symmetric." << endl;
        return 0;
    }
    int matrix[rows][cols];
    cout << "\nEnter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    bool isSymmetric = true;
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }
    if (isSymmetric) {
        cout << "\nThe matrix is a Symmetric Matrix." << endl;
    } else {
        cout << "\nThe matrix is NOT a Symmetric Matrix." << endl;
    }

    return 0;
}
