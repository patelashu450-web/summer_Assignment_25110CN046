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

    int sum = 0;
    for(int i = 1; i < size ; i++) {
        sum = sum + arr[i] ;
    }
    cout << "Sum of all element in array : " << sum << endl;

    float average ;
        average = sum / size ;
    cout << "average of element in array : " << average << endl;

    return 0;
}