#include <iostream>
using namespace std;
int main(){
    int num ,remainder, sum =0;

    cout<< "Enter the integer : ";
    cin>> num;
    if(num<=0){
        cout<< num <<" is not a perfect number."<< endl;
    }else{
        for(int i =1; i< num ; i++){
            remainder = num % i;
            if ( remainder == 0){
            sum = sum + i;
            }
        }
        if ( sum == num ){
            cout<< num << "  is perfect no ." << endl;
         }else{
        cout<< num << "  is not  perfect no ." << endl;
        }
    }
    return 0;
}