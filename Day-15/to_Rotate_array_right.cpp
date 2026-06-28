#include <iostream>
#include <algorithm> 
using namespace std;

void Rotate(int arr[], int d, int n) {
    d = d % n;
    if (d == 0) return;

    reverse(arr+(n - d), arr +n);
    reverse(arr, arr +(n - d));
    reverse(arr, arr + n );
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    cout << "The original array is: ";
    printArray(arr, size);

    int d;
    cout << "Enter the number of positions to rotate: ";
    cin >> d;

    Rotate(arr, d, size);
    cout << "The rotated array is: ";
    printArray(arr, size);

    delete[] arr;
    return 0;
}