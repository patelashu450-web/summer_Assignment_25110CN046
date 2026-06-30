#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter your text: ";
    while (cin.get(ch) && ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        cout << ch;
    }
    
    cout << endl;
    return 0;
}

