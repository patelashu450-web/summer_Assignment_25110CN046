#include <iostream>
using namespace std;
int main(){
    int steps ;
    cout<< "repeated number pattern of steps: ";
    cin>> steps;
    
    for(int i=1 ; i<= steps ; i++){
       for(int j=1 ; j<=i ; j++) {
        cout << i ;
       } 
       cout<< "\n"; 
    }
    return 0;
}