#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX_STUDENTS = 100;
    string names[MAX_STUDENTS];
    int rolls[MAX_STUDENTS];
    float marks[MAX_STUDENTS];
    int studentCount = 0;
    int choice;

    while (true) {
        cout << "\n--- Student Record System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            if (studentCount < MAX_STUDENTS) {
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, names[studentCount]);
                cout << "Enter Roll Number: ";
                cin >> rolls[studentCount];
                cout << "Enter Marks: ";
                cin >> marks[studentCount];
                studentCount++;
                cout << "Record added successfully.\n";
            } else {
                cout << "Database is full.\n";
            }
        } 
        else if (choice == 2) {
            if (studentCount == 0) {
                cout << "No records found.\n";
            } else {
                cout << "\n--- Student Records ---\n";
                for (int i = 0; i < studentCount; i++) {
                    cout << "Roll: " << rolls[i] << " | Name: " << names[i] << " | Marks: " << marks[i] << "\n";
                }
            }
        } 
        else if (choice == 3) {
            if (studentCount == 0) {
                cout << "No records to search.\n";
            } else {
                int searchRoll;
                bool found = false;
                cout << "Enter Roll Number to search: ";
                cin >> searchRoll;
                for (int i = 0; i < studentCount; i++) {
                    if (rolls[i] == searchRoll) {
                        cout << "Record Found -> Name: " << names[i] << " | Marks: " << marks[i] << "\n";
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Student with Roll Number " << searchRoll << " not found.\n";
                }
            }
        } 
        else if (choice == 4) {
            cout << "Exiting program.\n";
            break;
        } 
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
