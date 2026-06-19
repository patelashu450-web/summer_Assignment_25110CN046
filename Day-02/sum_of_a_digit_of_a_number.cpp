#include <iostream>
using namespace std;
int main(){
    int i, n, sum =0;

    cout<<"Enter the number:";
    cin>>n;

    while(n!=0){sum = sum+ n%10;
    n=n/10;
    }
    cout<<"Sum of the digits of the number: "<<sum<<"\n";
    return 0;

}