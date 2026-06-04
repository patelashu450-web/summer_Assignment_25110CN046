#include <iostream>
using namespace std;

int reverse_no(int n) {
    int reverse=0;
    while(n!=0){
        reverse= reverse*10 + n % 10;
        n=n/10;
    }
    return reverse ;
}

int main() {
    int number;
    cout<< " Enter the number: ";
    cin>> number;
    cout << "reverse of " << number << " is " << reverse_no(number) <<endl;
    return 0;
}
