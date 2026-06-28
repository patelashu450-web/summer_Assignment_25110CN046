#include <iostream>
using namespace std; 

int main() {
    int initalValue, finalValue;
    
    cout << "Enter the minimum value of the range: ";
    cin >> initalValue;
    cout << "Enter the maximum value of the range: ";
    cin >> finalValue;
    
    int totalElements = finalValue - initalValue;
    
    int actualSum = 0;
    cout << "Enter " << totalElements << " elements:";
    for (int j = 0; j < totalElements; j++) {
        int num;
        cin >> num;
        actualSum += num; 
    }
    int expectedSum = 0;
    for (int i = initalValue; i <= finalValue; i++) {
        expectedSum += i;
    }
    
    int missingNumber = expectedSum - actualSum;
    
    cout << "The missing number is: " << missingNumber << endl;
    
    return 0;
}