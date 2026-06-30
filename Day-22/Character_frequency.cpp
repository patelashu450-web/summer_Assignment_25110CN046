#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int frequency[256] = {0};
    
    for (int i = 0; i < str.length(); i++) {
        unsigned char ch = str[i];
        frequency[ch]++;
    }
    cout << "\nCharacter Frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if ((char)i == ' ') {
                cout << "[Space] : " << frequency[i] << endl;
            } else {
                cout << "'" << (char)i << "' : " << frequency[i] << endl;
            }
        }
    }
    
    return 0;
}
