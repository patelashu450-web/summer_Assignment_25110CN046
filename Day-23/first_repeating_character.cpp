#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; 
    cout << "Enter a string: ";
    cin >> str;
    
    char firstRepeating = '\0';
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                firstRepeating = str[i];
                break; 
            }
        }
        if (firstRepeating != '\0') {
            break;
        }
    }
    if (firstRepeating != '\0') {
        cout << "The first repeating character is: " << firstRepeating << endl;
    } else {
        cout << "No repeating characters found." << endl;
    }
    return 0;
}
