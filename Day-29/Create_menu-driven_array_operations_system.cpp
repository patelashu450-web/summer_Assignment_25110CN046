#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\n--- Array Operations Menu ---\n";
    cout << "1. Insert Element\n";
    cout << "2. Delete Element\n";
    cout << "3. Search Element\n";
    cout << "4. Display Array\n";
    cout << "5. Exit\n";
    cout << "Enter your choice: ";
}
int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    int choice;
    cout << "Enter initial number of elements (max " << MAX_SIZE << "): ";
    cin >> size;
    if (size > MAX_SIZE) {
        size = MAX_SIZE;
    }
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 5) {
            break;
        }
        switch (choice) {
            case 1: {
                if (size >= MAX_SIZE) {
                    cout << "Array is full.\n";
                    break;
                }
                int element, position;
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position (0 to " << size << "): ";
                cin >> position;
                if (position < 0 || position > size) {
                    cout << "Invalid position.\n";
                } else {
                    for (int i = size; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = element;
                    size++;
                    cout << "Element inserted successfully.\n";
                }
                break;
            }
            case 2: {
                if (size == 0) {
                    cout << "Array is empty.\n";
                    break;
                }
                int position;
                cout << "Enter position to delete (0 to " << size - 1 << "): ";
                cin >> position;

                if (position < 0 || position >= size) {
                    cout << "Invalid position.\n";
                } else {
                    for (int i = position; i < size - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    cout << "Element deleted successfully.\n";
                }
                break;
            }
            case 3: {
                if (size == 0) {
                    cout << "Array is empty.\n";
                    break;
                }
                int target;
                cout << "Enter element to search: ";
                cin >> target;
                int foundIndex = -1;

                for (int i = 0; i < size; i++) {
                    if (arr[i] == target) {
                        foundIndex = i;
                        break;
                    }
                }

                if (foundIndex != -1) {
                    cout << "Element found at index " << foundIndex << "\n";
                } else {
                    cout << "Element not found.\n";
                }
                break;
            }
            case 4: {
                if (size == 0) {
                    cout << "Array is empty.\n";
                    break;
                }
                cout << "Array elements: ";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
                break;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
