#include <iostream>
using namespace std;

int findsum(int a, int b) {
    return a+b;
}

int main() {
    int num1, num2;
    cout<<"Enter the first no: ";
    cin>>num1;
    cout<<"Enter the second no: ";
    cin>>num2;
    
    cout << "Sum of " << num1<< "and"<< num2 <<"is: "<<findsum(num1, num2) <<endl;
    return 0;
}
