#include <iostream>
using namespace std;
int main(){
    int steps ;
    cout<< "Hollow square pattern of steps: ";
    cin>> steps;
    
    for(int i=1 ; i<= steps ; i++){
       for(int j=1 ; j<=steps ; j++) {
        if( i==1 || i==steps || j==1|| j==steps){
           cout << "*";
        }else{
            cout <<" ";
        }
       } 
       cout<< "\n"; 
    }
    return 0;
}