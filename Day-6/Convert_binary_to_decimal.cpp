#include <iostream>
using namespace std;
int main() {
    long long binaryNumber;
    int decimalValue = 0;
    int base = 1;

    cout << "Enter a binary number: ";
    cin >> binaryNumber;

    long long temp = binaryNumber;

    while (temp > 0) {
        int lastDigit = temp % 10; 
        temp = temp / 10;          

        decimalValue += lastDigit * base;
        base = base * 2;           
    }
    cout << "Decimal value: " << decimalValue << std::endl;
    return 0;
}
