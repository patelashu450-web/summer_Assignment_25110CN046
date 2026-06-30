#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    int freq1[26] = {0};
    int freq2[26] = {0};
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            int index = str1[i] - 'a'; 
            freq1[index]++;
        }
    }
    for (int i = 0; i < str2.length(); i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            int index = str2[i] - 'a';
            freq2[index]++;
        }
    }
    cout << "Common characters: ";
    bool found = false;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            char commonChar = i + 'a';
            cout << commonChar << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "None";
    }
    cout << endl;

    return 0;
}
