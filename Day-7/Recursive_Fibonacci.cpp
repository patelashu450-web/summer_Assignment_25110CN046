#include <iostream>
using namespace std;

void Fibonacci(int n) { 
    int first_term = 0, second_term = 1, next_term;
    
    cout << "Fibonacci series till " << n << " term is: ";
    
    for(int i=1; i<= n; i++){
        cout << first_term;
        if (i < n) {
            cout << ", ";
        }
        next_term = first_term + second_term;

        first_term = second_term;
        second_term = next_term;
    }
    cout << endl;
}

int main() {
    int term;
    cout << "Enter the number of terms to print: ";
    cin >> term;
    
    if (term <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        Fibonacci(term);
    }
    
    return 0;
}
