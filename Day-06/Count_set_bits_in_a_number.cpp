#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num; 
    int count = 0;

    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num = num >> 1;
    }
    cout << "Number of set bits in " << temp << " is: " << count << endl;
    
    return 0;
}
