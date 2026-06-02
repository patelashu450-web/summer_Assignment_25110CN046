#include <iostream>
#include <cmath>
using namespace std;

int main(){
     int lower, upper, i;
     
    cout<<"enter the lower limit: ";
    cin>>lower;
    cout<<"enter the upper limit: ";
    cin>>upper;

    cout<<"armstrong numbers between " <<lower<< "and "<<upper<< " are: "<<endl;
    
    for (i = lower; i <= upper; i++){
       int original_num = i;
       int temp= i;
       int count =0;
       double sum =0 ;
    while(temp !=0){
        temp /= 10;
        count ++;
    }
    temp= i;
    while(temp !=0){
        int  last_num= temp%10;
         sum += round( pow (last_num ,count)) ;
         temp /= 10;}
    

    if( sum == original_num ){
        cout << original_num <<" is an armstrong number."<<endl;
    }
}
         return 0;
}
