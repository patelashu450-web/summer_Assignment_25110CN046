#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};
void addBook(Book books[], int& count) {
    if (count >= 100) {
        cout << "Library is full.\n";
        return;
    }
    cout << "Enter Book ID: ";
    cin >> books[count].id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, books[count].title);
    cout << "Enter Author: ";
    getline(cin, books[count].author);
    books[count].isIssued = false;
    count++;
    cout << "Book added successfully.\n";
}
void displayBooks(const Book books[], int count) {
    if (count == 0) {
        cout << "No books available.\n";
        return;
    }
    for (int i = 0; i < count; i++) {
        cout << "ID: " << books[i].id 
             << " | Title: " << books[i].title 
             << " | Author: " << books[i].author 
             << " | Status: " << (books[i].isIssued ? "Issued" : "Available") << "\n";
    }
}
void searchBook(const Book books[], int count) {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            cout << "Found - Title: " << books[i].title << " | Author: " << books[i].author << "\n";
            return;
        }
    }
    cout << "Book not found.\n";
}
void issueBook(Book books[], int count) {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].isIssued) {
                cout << "Book is already issued.\n";
            } else {
                books[i].isIssued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}
int main() {
    Book library[100];
    int bookCount = 0;
    int choice;
    while (true) {
        cout << "\n--- Mini Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            addBook(library, bookCount);
        } else if (choice == 2) {
            displayBooks(library, bookCount);
        } else if (choice == 3) {
            searchBook(library, bookCount);
        } else if (choice == 4) {
            issueBook(library, bookCount);
        } else if (choice == 5) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}
