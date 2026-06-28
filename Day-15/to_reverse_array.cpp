#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The original array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The reverse array are: ";
    for (int i = size-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
