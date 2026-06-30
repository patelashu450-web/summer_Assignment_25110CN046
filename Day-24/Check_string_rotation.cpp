#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "No, the strings are not rotations of each other." << endl;
        return 0;
    }
    string combined = str1 + str1;
    int n = combined.length();
    int m = str2.length();
    bool isRotation = false;

    for (int i = 0; i <= n - m; i++) {
        int j;
        for ( j = 0; j < m; j++) {
            if (combined[i + j] != str2[j]) {
                break; 
            }
        }
        if ( j == m) {
            isRotation = true;
            break; 
        }
    }
    if (isRotation) {
        cout << "Yes, the strings are rotations of each other." << endl;
    } else {
        cout << "No, the strings are not rotations of each other." << endl;
    }
    return 0;
}
