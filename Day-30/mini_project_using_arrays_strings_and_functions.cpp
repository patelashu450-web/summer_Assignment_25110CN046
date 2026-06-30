#include <iostream>

using namespace std;

const int MAX_BOOKS = 100;
string titles[MAX_BOOKS];
string authors[MAX_BOOKS];
bool isAvailable[MAX_BOOKS];
int bookCount = 0;

void displayMenu() {
    cout << "\n=== Library Management System ===\n";
    cout << "1. Add New Book\n";
    cout << "2. Display All Books\n";
    cout << "3. Search Book by Title\n";
    cout << "4. Borrow Book\n";
    cout << "5. Return Book\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Error: Library is full.\n";
        return;
    }
    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, titles[bookCount]);
    cout << "Enter author name: ";
    getline(cin, authors[bookCount]);
    isAvailable[bookCount] = true;
    bookCount++;
    cout << "Book added successfully!\n";
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "No books available in the library.\n";
        return;
    }
    cout << "\n--- Book List ---\n";
    for (int i = 0; i < bookCount; i++) {
        cout << "ID: " << i + 1 << " | Title: " << titles[i] 
             << " | Author: " << authors[i] << " | Status: " 
             << (isAvailable[i] ? "Available" : "Borrowed") << "\n";
    }
}

void searchBook() {
    if (bookCount == 0) {
        cout << "Library is empty.\n";
        return;
    }
    cout << "Enter title to search: ";
    cin.ignore();
    string searchTitle;
    getline(cin, searchTitle);
    bool found = false;
    for (int i = 0; i < bookCount; i++) {
        if (titles[i] == searchTitle) {
            cout << "Found! ID: " << i + 1 << " | Title: " << titles[i] 
                 << " | Author: " << authors[i] << " | Status: " 
                 << (isAvailable[i] ? "Available" : "Borrowed") << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Book not found.\n";
    }
}

void borrowBook() {
    displayBooks();
    if (bookCount == 0) return;
    cout << "Enter Book ID to borrow: ";
    int id;
    cin >> id;
    int index = id - 1;
    if (index >= 0 && index < bookCount) {
        if (isAvailable[index]) {
            isAvailable[index] = false;
            cout << "You have successfully borrowed: " << titles[index] << "\n";
        } else {
            cout << "Sorry, this book is already borrowed.\n";
        }
    } else {
        cout << "Invalid Book ID.\n";
    }
}

void returnBook() {
    displayBooks();
    if (bookCount == 0) return;
    cout << "Enter Book ID to return: ";
    int id;
    cin >> id;
    int index = id - 1;
    if (index >= 0 && index < bookCount) {
        if (!isAvailable[index]) {
            isAvailable[index] = true;
            cout << "You have successfully returned: " << titles[index] << "\n";
        } else {
            cout << "This book was not borrowed.\n";
        }
    } else {
        cout << "Invalid Book ID.\n";
    }
}

int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                borrowBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
    return 0;
}
