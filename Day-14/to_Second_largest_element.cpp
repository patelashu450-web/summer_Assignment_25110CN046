#include <iostream>
#include <climits>
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

    int largest = arr[0];
    for(int i = 1; i < size ; i++) {
        if(arr[i] > largest) {
            largest = arr[i];  
        }
    }
    
    int second_largest = INT_MIN ;
    for(int i = 1; i < size ; i++) {
        if(largest > arr[i] && arr[i] > second_largest) {
            second_largest = arr[i];  
        }
    }
    cout << "Second Largest element: " << second_largest << endl;

    return 0;
}
