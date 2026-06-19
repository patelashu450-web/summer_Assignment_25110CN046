#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if(n<2){
        cout<< "No prime factor for number less than 2."<<endl ;
        return 0;
    }
    long long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    if (n > 2) {
        maxPrime = n;
    }

    cout << "The largest prime factor is: " << maxPrime << endl;

    return 0;
}