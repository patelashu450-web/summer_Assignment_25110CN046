#include <iostream>
#include <string>
using namespace std;

int main() {
    string currentWord;
    string longestWord = "";

    cout << "Enter a sentence (Press Ctrl+D or Ctrl+Z then Enter to finish): " << endl;
    while (cin >> currentWord) {
        if (currentWord.length() > longestWord.length()) {
            longestWord = currentWord;
        }
    }
    if (longestWord == "") {
        cout << "No words were entered." << endl;
    } else {
        cout << "The longest word is: " << longestWord << endl;
        cout << "Its length is: " << longestWord.length() << " characters." << endl;
    }
    return 0;
}
