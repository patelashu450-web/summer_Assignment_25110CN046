#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix0[rows][cols];
    int matrix2[rows][cols];
    int subtractMatrix[rows][cols];

    cout << "Enter elements for the first matrix:" << endl;
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix0[i][j];
        }
    }
    cout << "Enter elements for the second matrix:" << endl;
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            subtractMatrix[i][j] = matrix0[i][j] - matrix2[i][j]; 
        }
    }
    cout << "Resultant Subtaction Matrix:" << endl;
    for (int i = 0; i <= rows; i++) {
        for (int j = 0; j <= cols; j++) {
            cout << subtractMatrix[i][j] ;
        }
        cout << endl; 
    }

    return 0;
}
