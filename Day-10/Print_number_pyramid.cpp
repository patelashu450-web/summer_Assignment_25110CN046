#include <iostream>
using namespace std;

int main() {
    int totalRows;
    cout<< "Enter the totalRows: ";
    cin >> totalRows; 
    for (int i = 1; i <= totalRows; i++) {
        
        for (int spc = 1; spc <= totalRows - i; spc++) {
            cout << " ";
        }
        int num =1;
        for (int j = 1; j <= i; j++) {
            cout << num;
            num++;
        }
        num -= 2;
        for (int j = 1; j < i; j++) {
            cout << num;
            num--;
        }

        cout << "\n";
    }

    return 0;
}
