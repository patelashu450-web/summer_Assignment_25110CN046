#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};
int main() {
    Item inventory[100];
    int itemCount = 0;
    int choice;
    while (true) {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display Inventory\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (itemCount >= 100) {
                cout << "Inventory full!\n";
                continue;
            }
            cout << "Enter Item ID: ";
            cin >> inventory[itemCount].id;
            cin.ignore();
            cout << "Enter Item Name: ";
            getline(cin, inventory[itemCount].name);
            cout << "Enter Quantity: ";
            cin >> inventory[itemCount].quantity;
            cout << "Enter Price: ";
            cin >> inventory[itemCount].price;
            itemCount++;
            cout << "Item added successfully!\n";
        } 
        else if (choice == 2) {
            if (itemCount == 0) {
                cout << "Inventory is empty.\n";
                continue;
            }
            cout << "\nID\tName\t\tQuantity\tPrice\n";
            cout << "---------------------------------------------\n";
            for (int i = 0; i < itemCount; i++) {
                cout << inventory[i].id << "\t" 
                     << inventory[i].name << "\t\t" 
                     << inventory[i].quantity << "\t\t" 
                     << inventory[i].price << "\n";
            }
        } 
        else if (choice == 3) {
            int searchId;
            bool found = false;
            cout << "Enter Item ID to search: ";
            cin >> searchId;
            for (int i = 0; i < itemCount; i++) {
                if (inventory[i].id == searchId) {
                    cout << "\nItem Found:\n";
                    cout << "ID: " << inventory[i].id << "\n";
                    cout << "Name: " << inventory[i].name << "\n";
                    cout << "Quantity: " << inventory[i].quantity << "\n";
                    cout << "Price: " << inventory[i].price << "\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Item not found.\n";
            }
        } 
        else if (choice == 4) {
            int updateId;
            bool found = false;
            cout << "Enter Item ID to update: ";
            cin >> updateId;
            for (int i = 0; i < itemCount; i++) {
                if (inventory[i].id == updateId) {
                    cout << "Current Quantity: " << inventory[i].quantity << "\n";
                    cout << "Enter New Quantity: ";
                    cin >> inventory[i].quantity;
                    cout << "Quantity updated successfully!\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Item not found.\n";
            }
        } 
        else if (choice == 5) {
            cout << "Exiting program.\n";
            break;
        } 
        else {
            cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}
