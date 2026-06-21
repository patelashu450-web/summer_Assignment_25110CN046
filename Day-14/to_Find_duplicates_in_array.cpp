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

    cout << "The elements in the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Duplicate elements in the array are: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++){
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break; 
            }
        }}    
    cout << endl;

    return 0;
}