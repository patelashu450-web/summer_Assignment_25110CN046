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

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int maxElement = arr[0];
    int maxCount = 1;
    
    int currentElement = arr[0];
    int currentCount = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                maxElement = currentElement;
            }
            currentElement = arr[i];
            currentCount = 1;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
        maxElement = currentElement;
    }

    cout << "The element with maximum frequency is " << maxElement 
         << " appears " << maxCount << " times" << endl;

    return 0;
}