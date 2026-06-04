#include <iostream>
using namespace std;

int digit_sum(int n) {
    int sum = 0;
    while(n!=0){
        sum = sum+ n % 10;
    n=n/10;
    }
    return sum ; 
}

int main() {
    int number;
    cout<< " Enter the number: ";
    cin>> number;
    cout << " Sum pof digit of " << number << " is " << digit_sum(number) <<endl;
    return 0;
}