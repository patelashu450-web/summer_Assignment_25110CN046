#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int wordCount = 0;
    cout << "Enter a sentence: ";

    getline(cin, sentence);
    if (sentence.empty()) {
        cout << "Number of words is 0" << endl;
        return 0;
    }
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }
    wordCount = wordCount + 1;
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
