#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter the size of the first sorted array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " sorted elements: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter the size of the second sorted array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " sorted elements: ";
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    int totalSize = n1 + n2;
    int mergedArr[totalSize];
    int i = 0; 
    int j = 0;
    int k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k] = arr1[i];
            i++;
        } else {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n2) {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }
    cout << "Merged sorted array: ";
    for (int index = 0; index < totalSize; index++) {
        cout << mergedArr[index] << " ";
    }
    cout << endl;

    return 0;
}
