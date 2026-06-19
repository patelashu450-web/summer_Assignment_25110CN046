#include <iostream>
using namespace std;
int main(){
    int n_term ;
    int first_term = 0, second_term = 1, next_term;

     cout <<"Enter the no of term has to be print:" ;
        cin >> n_term ;
    

    if  (n_term<=0) {
       cout << first_term;
    }
    else if  (n_term==1) {
        cout << second_term;
    }
    else{
        for(int i=2; i<= n_term; i++){
           next_term = first_term + second_term;
           first_term = second_term;
           second_term = next_term;
    } 
    cout << "The " << n_term << "th term of the Fibonacci series is: " << next_term;
}
       
    return 0;
}