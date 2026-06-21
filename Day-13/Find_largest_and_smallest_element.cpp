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

    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 1; i < size ; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i]; 
        }
        if(arr[i] > largest) {
            largest = arr[i];  
    }
}

    cout << "Smallest element: " << smallest << endl;
    cout << "Largest element: " << largest << endl;

    return 0;
}
