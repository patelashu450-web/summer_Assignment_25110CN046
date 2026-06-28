#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int currentNum;
    int lastUniqueNum;
    int uniqueCount = 0;
    
    cout << "Enter " << size << " sorted numbers: " << endl;
    if (size > 0) {
        cin >> currentNum;
        lastUniqueNum = currentNum;
        uniqueCount = 1;
        cout << "Array after removing duplicates: " << currentNum << " ";
    }
    for (int i = 1; i < size; i++) {
        cin >> currentNum;
        if (currentNum != lastUniqueNum) {
            cout << currentNum << " ";
            lastUniqueNum = currentNum; 
            uniqueCount++;
        }
    }
    
    cout << endl;
    cout << "Total unique elements: " << uniqueCount << endl;

    return 0;
}