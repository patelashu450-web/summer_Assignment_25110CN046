#include <iostream>
using namespace std;

bool findPair(int arr[], int size, int targetSum) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == targetSum) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")\n";
            return true;
        }
        else if (currentSum < targetSum) {
            left++; 
        }
        else {
            right--;
        }
    }

    cout << "No pair found with the given sum.";
    return false;
}
int main() {
    int size, targetSum;
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter the elements whose sum have to find: ";
    cin >> targetSum;
    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    findPair(arr, size, targetSum);

    return 0;
}
