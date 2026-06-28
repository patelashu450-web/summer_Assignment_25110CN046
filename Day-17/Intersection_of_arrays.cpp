#include <iostream>
using namespace std;

bool isAlreadyAdded(int result[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (result[i] == element) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int size1, size2;
    cout << "Enter the number of elementsin array 1: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter " << size1 << " numbers: " << endl;
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter the number of elementsin array 2: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter " << size2 << " numbers: " << endl;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    
    int result[100]; 
    int resultSize = 0; 
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j] && !isAlreadyAdded(result, resultSize, arr1[i])) {
                result[resultSize] = arr1[i];
                resultSize++;
                break; 
            }
        }
    }
    cout << "Intersection elements in both array: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
