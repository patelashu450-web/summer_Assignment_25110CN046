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

    int num;
    cout << "The elements whose frequency have to count: ";
    cin >> num;

    int count = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    
    cout << "The element " << num << " appears " << count << " times." << endl;
    
    return 0;
}