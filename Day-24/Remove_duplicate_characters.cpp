#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputStr;
    string resultStr = "";
    cout << "Enter a string: ";
    cin >> inputStr;

    for (int i = 0; i < inputStr.length(); i++) {
        bool isDuplicate = false;

        for (int j = 0; j < resultStr.length(); j++) {
            if (inputStr[i] == resultStr[j]) {
                isDuplicate = true;
                break;
        }
        if (!isDuplicate) {
            resultStr += inputStr[i];
        }
    }

    // Output the final string with duplicates removed
    cout << "String after removing duplicates: " << resultStr << endl;

    return 0;
}
