#include <iostream>
using namespace std;
int main(){
    int num ,remainder;

    cout<< "Enter the integer : ";
    cin>> num;
    if(num==0){
        cout<<"Every nonzero integer is a factor of 0.";
    }else{
        for(int i =1; i<= num ; i++){
            remainder = num % i;
            if ( remainder == 0){
            cout<< i <<" is a prime factor of "<< num << endl;
        }
    }
} 
return 0;
}