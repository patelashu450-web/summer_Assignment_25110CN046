#include <iostream>
using namespace std;

int main() {
    int totalRows;
    cout<< "Enter the totalRows: ";
    cin >> totalRows; 
    for (int i = 1; i <= totalRows; i++) {
        for(int j=1; j<=(totalRows-i); j++){
        cout <<" ";
        }
        for(int j=(totalRows-i); j<=(totalRows/2 +i+1); j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
