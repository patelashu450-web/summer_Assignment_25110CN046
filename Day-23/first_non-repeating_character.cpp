#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }
    char result = '\0'; 
    for (int i = 0; i < str.length(); i++) {
        if (freq[str[i]] == 1) {
            result = str[i];
            break; // Exit the loop as soon as the first unique character is found
        }
    }
    if (result != '\0') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "There are no non-repeating characters in the string." << endl;
    }
    return 0;
}
