#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};
void addContact(vector<Contact>& contacts) {
    Contact c;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, c.name);
    cout << "Enter Phone: ";
    getline(cin, c.phone);
    cout << "Enter Email: ";
    getline(cin, c.email);
    contacts.push_back(c);
    cout << "Contact added successfully!\n";
}
void displayContacts(const vector<Contact>& contacts) {
    if (contacts.empty()) {
        cout << "No contacts found.\n";
        return;
    }
    for (size_t i = 0; i < contacts.size(); ++i) {
        cout << i + 1 << ". Name: " << contacts[i].name 
                  << ", Phone: " << contacts[i].phone 
                  << ", Email: " << contacts[i].email << "\n";
    }
}
void searchContact(const vector<Contact>& contacts) {
    cout << "Enter name to search: ";
    string query;
    cin.ignore();
    getline(cin, query);
    bool found = false;
    for (size_t i = 0; i < contacts.size(); ++i) {
        if (contacts[i].name == query) {
            cout << "Found - Name: " << contacts[i].name 
                      << ", Phone: " << contacts[i].phone 
                      << ", Email: " << contacts[i].email << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Contact not found.\n";
    }
}
void deleteContact(vector<Contact>& contacts) {
    cout << "Enter name to delete: ";
    string query;
    cin.ignore();
    getline(cin, query);
    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == query) {
            contacts.erase(it);
            cout << "Contact deleted successfully!\n";
            return;
        }
    }
    cout << "Contact not found.\n";
}
int main() {
    vector<Contact> contacts;
    int choice;
    while (true) {
        cout << "\n--- Contact Management System ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) {
            addContact(contacts);
        } else if (choice == 2) {
            displayContacts(contacts);
        } else if (choice == 3) {
            searchContact(contacts);
        } else if (choice == 4) {
            deleteContact(contacts);
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}
