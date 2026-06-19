#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num ,remainder, original_num;
    int sum=0 ;

    cout<< "Enter the integer : ";
    cin>> num;

    original_num =num;

    while(num > 0){
        remainder = num%10;
        long fact = 1;
        for( int  i =1 ; i<= remainder; i++){
            fact = fact * i;
        }
        sum= sum + fact ;
        num = num / 10;
    }

    if( sum == original_num){
        cout<< original_num << " is a strong number. "<< endl;
    }else{
        cout<< original_num << " is not a strong number. "<< endl;
    }

    return 0;
}    