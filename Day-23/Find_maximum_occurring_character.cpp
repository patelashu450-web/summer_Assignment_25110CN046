#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++) {
        freq[(unsigned char)str[i]]++;
    }
    int maxCount = 0;
    char maxChar = ' ';

    for (int i = 0; i < str.length(); i++) {
        int currentCount = freq[(unsigned char)str[i]];
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxChar = str[i];
        }
    }
    if (maxCount > 0) {
        cout << "Maximum occurring character: '" << maxChar << "'" << endl;
        cout << "Occurrences: " << maxCount << " times" << endl;
    } else {
        cout << "The string is empty." << endl;
    }
    return 0;
}
