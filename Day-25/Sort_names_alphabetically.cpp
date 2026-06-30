#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Total names have to sort: ";
    cin >> n;
    string names[n]; 
    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    cout << "\nNames sorted alphabetically:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
