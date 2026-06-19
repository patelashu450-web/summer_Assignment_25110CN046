#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num ,last_num , original_num, temp;
    int count=0, sum= 0;

    cout << "Enter a integer: ";
    cin>> num;
    
    original_num = num;
    temp= num;

    while(temp !=0){
        temp /= 10;
        count ++;
    }

    temp= num;
    while(temp !=0){
         last_num= temp%10;
         sum += round( pow (last_num ,count)) ;
         temp /= 10;
    }
   
    if(sum == original_num ){
        cout << original_num <<" is an armstrong number."<<endl;
    }else{
        cout << original_num <<" is not an armstrong number."<<endl;
    }
         return 0;
}