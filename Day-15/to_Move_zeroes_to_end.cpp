#include <iostream>
using namespace std;

void moveZeroes(int arr[], int size) {
    int nonZeroIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] != 0) {
            swap(arr[nonZeroIndex], arr[i]);
            nonZeroIndex++;
        }
    }
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    moveZeroes(arr, size);

    cout << "New Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
