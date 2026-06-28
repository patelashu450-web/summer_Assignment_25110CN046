#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int size1;
    cout << "Enter the number of elementsin array 1: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter " << size1 << " numbers: " << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter the number of elementsin array 2: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " numbers: " << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int unionArr[size1 + size2]; 
    int k = 0; 

    for (int i = 0; i < size1; i++) {
        if (!isPresent(unionArr, k, arr1[i])) {
            unionArr[k] = arr1[i];
            k++;
        }
    }

    for (int i = 0; i < size2; i++) {
        if (!isPresent(unionArr, k, arr2[i])) {
            unionArr[k] = arr2[i];
            k++;
        }
    }
    cout << "Union of the two arrays: ";
    for (int i = 0; i < k; i++) {
        cout << unionArr[i] << " ";
    }
    cout << endl;

    return 0;
}
