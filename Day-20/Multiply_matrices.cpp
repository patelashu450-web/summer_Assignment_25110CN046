#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiplyMatrices(const vector<vector<int>>& mat1, 
                                               const vector<vector<int>>& mat2) {
    int r1 = mat1.size();
    int c1 = mat1[0].size();
    int r2 = mat2.size();
    int c2 = mat2[0].size();

    if (c1 != r2) {
        cerr << "Error: Matrices cannot be multiplied due to incompatible dimensions.\n";
        return {};
    }

    vector<vector<int>> result(r1, vector<int>(c2, 0));
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            int sum = 0;
            for (int k = 0; k < c1; ++k) {
                sum += mat1[i][k] * mat2[k][j];
            }
            result[i][j] = sum;
        }
    }

    return result;
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << "\t";
        }
        cout << "\n";
    }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix 2: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Error: Columns of Matrix 1 (" << c1 
                  << ") must match Rows of Matrix 2 (" << r2 << ").\n";
        return 1;
    }
    vector<vector<int>> mat1(r1, vector<int>(c1));
    vector<vector<int>> mat2(r2, vector<int>(c2));

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cin >> mat2[i][j];
        }
    }

    vector<vector<int>> result = multiplyMatrices(mat1, mat2);
    cout << "\nResultant Matrix:\n";
    printMatrix(result);

    return 0;
}
