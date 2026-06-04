#include <iostream>
using namespace std;
int main(){
    int steps ;
    cout<< "reverse number pattern of steps: ";
    cin>> steps;
    
    for(int i=steps ; i>= 1 ; i--){
       for(int j=1 ; j<=i ; j++) {
        cout << j<<" " ;
       } 
       cout<< "\n"; 
    }
    return 0;
}