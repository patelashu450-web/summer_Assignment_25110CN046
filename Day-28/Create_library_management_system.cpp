#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};
void addBook(vector<Book>& library) {
    Book newBook;
    cout << "Enter Book ID: ";
    cin >> newBook.id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, newBook.title);
    cout << "Enter Author: ";
    getline(cin, newBook.author);
    newBook.isIssued = false;
    library.push_back(newBook);
    cout << "Book added successfully.\n";
}
void displayBooks(const vector<Book>& library) {
    if (library.empty()) {
        cout << "No books available.\n";
        return;
    }
    for (const auto& book : library) {
        cout << "ID: " << book.id 
             << " | Title: " << book.title 
             << " | Author: " << book.author 
             << " | Status: " << (book.isIssued ? "Issued" : "Available") << "\n";
    }
}
void searchBook(const vector<Book>& library) {
    int id;
    cout << "Enter Book ID to search: ";
    cin >> id;
    for (const auto& book : library) {
        if (book.id == id) {
            cout << "Found - Title: " << book.title << " | Author: " << book.author << "\n";
            return;
        }
    }
    cout << "Book not found.\n";
}
void issueBook(vector<Book>& library) {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;
    for (auto& book : library) {
        if (book.id == id) {
            if (book.isIssued) {
                cout << "Book is already issued.\n";
            } else {
                book.isIssued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}
void returnBook(vector<Book>& library) {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;
    for (auto& book : library) {
        if (book.id == id) {
            if (!book.isIssued) {
                cout << "Book was not issued.\n";
            } else {
                book.isIssued = false;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }
    cout << "Book not found.\n";
}
int main() {
    vector<Book> library;
    int choice;
    while (true) {
        cout << "\n--- Library Management System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        if (choice == 6) {
            break;
        }
        switch (choice) {
            case 1: addBook(library); break;
            case 2: displayBooks(library); break;
            case 3: searchBook(library); break;
            case 4: issueBook(library); break;
            case 5: returnBook(library); break;
            default: cout << "Invalid choice.\n";
        }
    }
    return 0;
}
