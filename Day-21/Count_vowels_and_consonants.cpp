#include <iostream>
using namespace std;

bool isAlphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return true;
    }
    return false;
}
void countVowelsAndConsonants(char str[], int &vowels, int &consonants) {
    vowels = 0;
    consonants = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i]; 
        if (isAlphabet(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
}
int main() {
    char inputString[100];
    int vowelsCount = 0;
    int consonantsCount = 0;
    cout << "Enter a string (single word, no spaces): ";
    cin >> inputString; 
    
    countVowelsAndConsonants(inputString, vowelsCount, consonantsCount);
    cout << "Total Vowels: " << vowelsCount << endl;
    cout << "Total Consonants: " << consonantsCount << endl;
    
    return 0;
}