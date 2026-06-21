#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size]; 
    cout << "Enter " << size << " numbers:" <<endl;
    for (int i = 0; i < size; i++) {
        cout << i << ": ";
        cin >> arr[i];
    }

    cout << "The elements in the array are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    int target;
    cout << "Enter the number you want to search for: ";
    cin >> target;

    int foundIndex = -1; 
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            foundIndex = i; 
            break;          
        }
    }

    if (foundIndex != -1) {
        cout << "Element " << target << " found at index: " << foundIndex <<endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
