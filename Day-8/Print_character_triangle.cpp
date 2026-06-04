#include <iostream>
using namespace std;
int main(){
    int steps ;
    cout<< "character triangle of steps: ";
    cin>> steps;
    
    for(int i=1 ; i<= steps ; i++){
       for(int j=1 ; j<=i ; j++) {
        cout << char('A'+j -1) ;
       } 
       cout<< "\n"; 
    }
    return 0;
}