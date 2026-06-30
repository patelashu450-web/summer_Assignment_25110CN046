#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nColumn-wise sums:" << endl;

    for (int j = 0; j < cols; j++) {
        int columnSum = 0;
        for (int i = 0; i < rows; i++) {
            columnSum += matrix[i][j];
        }

        cout << "Sum of Column " << j + 1 << " = " << columnSum << endl;
    }

    return 0;
}
