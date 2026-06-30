#include <iostream>
using namespace std;
int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n--- Menu Calculator ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << "\n";
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << "\n";
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << "\n";
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << "\n";
                } else {
                    cout << "Error: Division by zero is not allowed.\n";
                }
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
