#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];

    int k = 0;
    for (int i = 0; i < size1; i++) {
        mergedArr[k++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergedArr[k++] = arr2[i];
    }

    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
