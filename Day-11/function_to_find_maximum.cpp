#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main(){
    int num1, num2;
    cout<<"Enter the first no: ";
    cin>>num1;
    cout<<"Enter the second no: ";
    cin>>num2;
    
    cout << "Maximum is: " << findMax(num1, num2) <<endl;
    return 0;
}
