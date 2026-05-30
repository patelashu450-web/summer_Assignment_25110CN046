#include <iostream>
using namespace std;
int main(){
    int n , i;
    bool isPrime = true;
    
    cout<<"enter the integer: ";
    cin>>n;

    if ( n <=1){
        isPrime = false;
    }else{
        for(i =2; i * i<=n; i++){
        if ( n % i ==0){
            isPrime = false;
            break; 

        }
        }
    }
    if ( isPrime){
        cout<< n<< "is a prime no." <<endl;
    }else{
        cout << n << "is not a prime number."<<endl;
    }
    return 0;
}