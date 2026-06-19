#include <iostream>
using namespace std;

int main() {
    int decimal_num;
    long long binary_num = 0;
    long long place_value = 1;

    cout << "Enter a decimal number: ";
    cin >> decimal_num; 

    while (decimal_num > 0) {
        int remainder = decimal_num % 2;           
        binary_num = binary_num + (remainder * place_value); 
        decimal_num = decimal_num / 2;             
        place_value *= 10;                         
    }

    cout << "Binary conversion of " << decimal_num << "is" << binary_num << endl;
    return 0;
}
