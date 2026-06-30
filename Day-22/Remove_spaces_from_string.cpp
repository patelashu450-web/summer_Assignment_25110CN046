#include <iostream>
using namespace std;

void removeSpaces(char* str) {
    int writeIndex = 0;
    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        if (str[readIndex] != ' ') {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }
    str[writeIndex] = '\0'; 
}

int main() {
    char message[100];
    cout << "Enter the text:" << endl;
    cin.getline(message, 100);
    
    cout << "Original text: " << message << endl;
    
    removeSpaces(message);
    
    cout << "New text: " << message << endl;
    
    return 0;
}
