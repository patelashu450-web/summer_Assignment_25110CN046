#include <iostream>
using namespace std;

    bool isNumberPerfectnum(int num) {
    if(num<=0){
        return false;
    }
    int  sum =0;
        for(int i =1; i< num ; i++){
            if (num % i ==0){
            sum = sum + i;
            }
        }
            return sum ;
        }
    int main(){
    int num ;

    cout<< "Enter the integer : ";
    cin>> num;
    if (isNumberPerfectnum(num)) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    return 0;
}
        
    
    
