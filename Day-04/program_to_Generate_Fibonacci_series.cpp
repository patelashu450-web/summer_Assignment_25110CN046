#include <iostream>
using namespace std;
int main(){
    int term ;
    int first_term = 0, second_term = 1, next_term;

    cout <<"Enter the no of term has to be print:";
    cin >> term;

    cout << "Fibonacci series: ";
    for(int i=1; i<= term; i++){
        cout << first_term;
        cout << ",";
        next_term = first_term + second_term;

        first_term = second_term;
        second_term = next_term;
    }
    return 0;
}