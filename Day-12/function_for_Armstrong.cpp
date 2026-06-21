#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    
    if (num < 0) return false;

    int originalNum = num;
    int totalDigits = 0;
    int sum = 0;

    int temp = num;
    while (temp > 0) {
        temp /= 10;
        totalDigits++;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        
        sum +=round(pow(digit, totalDigits));
        
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter the integer: ";
    cin>> num;
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." <<endl;
    } else {
        cout << num << " is NOT an Armstrong number." <<endl;
    }

    return 0;
}
