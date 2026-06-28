#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    int sumMatrix = 0;

    cout << "Enter elements for the first matrix:" << endl;
    for (int i =0; i <= rows; i++){
        for (int j =0; j <= cols; j++){
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    for (int i =0; i <= rows; i++) {
            sumMatrix += matrix[i][i]; 
        }

        cout << "Sum of Diagonal of Matrix:" << sumMatrix ;
         
        return 0;
    }