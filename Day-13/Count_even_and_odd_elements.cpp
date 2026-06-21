#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    int even_count = 0;
    int odd_count = 0;
    
    cout << "Enter " << n << " integers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    
    cout << "\nTotal Even elements: " << even_count << endl;
    cout << "Total Odd elements: " << odd_count << endl;
    
    return 0;
}
