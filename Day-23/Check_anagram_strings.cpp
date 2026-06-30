#include <iostream>
#include <string>
using namespace std;

bool checkAnagram(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    int charCounts[256] = {0};
    for (int i = 0; i < str1.length(); i++) {
        charCounts[str1[i]]++; 
        charCounts[str2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (charCounts[i] != 0) {
            return false; 
        }
    }
    return true;
}
int main() {
    string word1, word2;
    cout << "Enter the first string: ";
    cin >> word1;
    cout << "Enter the second string: ";
    cin >> word2;

    if (checkAnagram(word1, word2)) {
        cout << "\"" << word1 << "\" and \"" << word2 << "\" are anagrams." << endl;
    } else {
        cout << "\"" << word1 << "\" and \"" << word2 << "\" are NOT anagrams." << endl;
    }
    return 0;
}
