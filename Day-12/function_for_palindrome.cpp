#include <iostream>
using namespace std;

bool isNumberPalindrome(int num) {
    if (num < 0) {
        return false;
    }

    int originalNum = num;
    long long reversedNum = 0;
    while (num > 0) {
        int remainder = num % 10;          
        reversedNum = (reversedNum * 10) + remainder; 
        num = num / 10;                    
    }
    return originalNum == reversedNum;
}

int main() {
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;

    if (isNumberPalindrome(number)) {
        cout << number << " is a palindrome number." << endl;
    } else {
        cout << number << " is not a palindrome number." << endl;
    }

    return 0;
}
