#include <iostream>
using namespace std;

bool isDuplicate(int result[], int resultSize, int element) {
    for (int i = 0; i < resultSize; i++) {
        if (result[i] == element) {
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

    int maxSize = (size1 < size2) ? size1 : size2;
    int commonElements[maxSize];
    int commonCount = 0;

    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                if (!isDuplicate(commonElements, commonCount, arr1[i])) {
                    commonElements[commonCount] = arr1[i];
                    commonCount++;
                }
                break; 
            }
        }
    }

    cout << "Common elements in both array: ";
    if (commonCount == 0) {
        cout << "None";
    } else {
        for (int i = 0; i < commonCount; i++) {
            cout << commonElements[i] << " ";
        }
    }
    cout <<endl;

    return 0;
}
