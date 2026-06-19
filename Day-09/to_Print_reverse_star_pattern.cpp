#include <iostream>
using namespace std;
int main(){
    int steps ;
    cout<< "reverse star pattern of steps: ";
    cin>> steps;
    
    for(int i=steps ; i>= 1 ; i--){
       for(int j=i ; j>=1 ; j--) {
        cout << "*";
       } 
       cout<< "\n"; 
    }
    return 0;
}