#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    char name[50];
    float gpa;};
Student records[100];
int studentCount = 0;

void copyString(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0' && i < 49) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';}
void addStudent() {
    if (studentCount >= 100) {
        cout << "\nError: Database is full!\n";
        return;
    }
    int roll;
    cout << "\nEnter Roll Number: ";
    cin >> roll;

    for (int i = 0; i < studentCount; i++) {
        if (records[i].rollNumber == roll) {
            cout << "Error: A student with this Roll Number already exists!\n";
            return;
        }
    }
    records[studentCount].rollNumber = roll;

    cout << "Enter Name (No spaces): ";
    cin >> records[studentCount].name;
    cout << "Enter GPA: ";
    cin >> records[studentCount].gpa;
    studentCount++;
    cout << "Student added successfully!\n";
}
void displayAll() {
    if (studentCount == 0) {
        cout << "\nNo records found.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    cout << "Roll No\t\tName\t\tGPA\n";
    cout << "-----------------------------------\n";
    for (int i = 0; i < studentCount; i++) {
        cout << records[i].rollNumber << "\t\t" 
             << records[i].name << "\t\t" 
             << records[i].gpa << "\n";
    }}
void searchStudent() {
    if (studentCount == 0) {
        cout << "\nNo records found.\n";
        return;
    }
    int roll;
    cout << "\nEnter Roll Number to search: ";
    cin >> roll;
    for (int i = 0; i < studentCount; i++) {
        if (records[i].rollNumber == roll) {
            cout << "\nRecord Found!\n";
            cout << "Roll Number: " << records[i].rollNumber << "\n";
            cout << "Name: " << records[i].name << "\n";
            cout << "GPA: " << records[i].gpa << "\n";
            return;
        }}
        cout << "Student with Roll Number " << roll << " not found.\n";
}
void deleteStudent() {
    if (studentCount == 0) {
        cout << "\nNo records to delete.\n";
        return;}
    int roll;
    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;
    for (int i = 0; i < studentCount; i++) {
        if (records[i].rollNumber == roll) {
            // Shift remaining elements left to fill the gap
            for (int j = i; j < studentCount - 1; j++) {
                records[j] = records[j + 1];
            }
            studentCount--;
            cout << "Record deleted successfully!\n";
            return;
        }
    }
    cout << "Student with Roll Number " << roll << " not found.\n";
}
int main() {
    int choice;
    while (true) {
        cout << "\n===============================\n";
        cout << "   STUDENT MANAGEMENT SYSTEM   \n";
        cout << "===============================\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student Record\n";
        cout << "4. Delete Student Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAll();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                cout << "\nExiting program. Goodbye!\n";
                return 0;
            default:
                cout << "\nInvalid choice! Please try again.\n";
        }
    }
    return 0;
}
