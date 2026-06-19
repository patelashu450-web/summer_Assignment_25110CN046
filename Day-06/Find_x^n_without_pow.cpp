#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;
    double result = 1.0;

    cout << "Enter base (x): "; 
    cin >> base;
    cout << "Enter exponent (n): "; 
    cin >> exponent;

    int originalExponent = exponent;
    double originalBase = base; 
    int absoluteExponent = (exponent < 0) ? -exponent : exponent;
   while (absoluteExponent > 0) {
    if (absoluteExponent % 2 == 1) {
        result *= base;
    }
    
    base *= base;
    absoluteExponent /= 2;
}

    cout << originalBase << "^" << originalExponent << " = " << result << endl;

    return 0;
}

