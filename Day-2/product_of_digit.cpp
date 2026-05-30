#include <iostream>
using namespace std;
int main(){
    int n , product=1;

    cout<<"Enter the number:";
    cin>>n;

    if ( num < 0 ){
        n = - n;
    }
    if (n==0){
        product = 0;
    }
    else{
    while(n > 0){
        product = product * (n % 10);
        n=n/10;
    }
    }

    cout<<"Product of the digits of the number: "<<product<<"\n";
    return 0;
    
}