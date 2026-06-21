#include <iostream>
using namespace std;

unsigned long long calculateFactorial(int n) {
    if (n < 0) {
        return 0; 
    }
    unsigned long long factorial = 1; 
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    int num;
    
    cout << "Enter a positive integer: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long result = calculateFactorial(num);
        cout << "Factorial of " << num << " = " << result << endl;
    }
    
    return 0;
}