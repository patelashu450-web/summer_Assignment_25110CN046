#include <iostream>
using namespace std;
int main(){
    int lower, upper, i;
    bool isPrime;

    cout<<"enter the lower limit: ";
    cin>>lower;
    cout<<"enter the upper limit: ";
    cin>>upper;

    cout<<"prime numbers between "<<lower<<" and "<<upper<<" are: "<<endl;

    for (i = lower; i <= upper; i++){
        if (i <= 1){
            continue; // skip numbers less than or equal to 1
        }
        isPrime = true;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0){
                isPrime = false;
                break; // not a prime number
            }
        }
        if (isPrime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
