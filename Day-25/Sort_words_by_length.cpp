#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of words: ";
    cin >> n;
    string words[100]; 
    cout << "Enter " << n << " words: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                string temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    cout << "\nWords sorted by length:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << " ";
    }
    cout << endl;

    return 0;
}
