#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    string str1, str2;
    do {
        cout << "\n--- STRING OPERATIONS MENU ---\n";
        cout << "1. Concatenate Strings\n";
        cout << "2. Compare Strings\n";
        cout << "3. Find String Length\n";
        cout << "4. Reverse a String\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                cout << "Concatenated String: " << str1 + str2 << "\n";
                break;
            case 2:
                cout << "Enter first string: ";
                getline(cin, str1);
                cout << "Enter second string: ";
                getline(cin, str2);
                if (str1 == str2) {
                    cout << "Strings are equal.\n";
                } else if (str1 > str2) {
                    cout << "First string is greater than second string.\n";
                } else {
                    cout << "Second string is greater than first string.\n";
                }
                break;
            case 3:
                cout << "Enter a string: ";
                getline(cin, str1);
                cout << "Length of the string: " << str1.length() << "\n";
                break;
            case 4:
                cout << "Enter a string: ";
                getline(cin, str1);
                str2 = "";
                for (int i = str1.length() - 1; i >= 0; i--) {
                    str2 += str1[i];
                }
                cout << "Reversed String: " << str2 << "\n";
                break;
            case 5:
                cout << "Exiting system.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
