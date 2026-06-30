#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 100;
struct Employee {
    int id;
    string name;
    string department;
    double salary;
};
Employee employees[MAX_EMPLOYEES];
int employeeCount = 0;
void addEmployee() {
    if (employeeCount >= MAX_EMPLOYEES) {
        cout << "System full. Cannot add more employees.\n";
        return;
    }
    Employee emp;
    cout << "Enter Employee ID: ";
    cin >> emp.id;
    cin.ignore(); 

    cout << "Enter Name: ";
    getline(cin, emp.name);

    cout << "Enter Department: ";
    getline(cin, emp.department);

    cout << "Enter Salary: ";
    cin >> emp.salary;

    employees[employeeCount] = emp;
    employeeCount++;
    cout << "Employee added successfully!\n";
}

void displayEmployees() {
    if (employeeCount == 0) {
        cout << "No employee records found.\n";
        return;
    }

    cout << "\n--- Employee List ---\n";
    for (int i = 0; i < employeeCount; i++) {
        cout << "ID: " << employees[i].id 
             << " | Name: " << employees[i].name 
             << " | Dept: " << employees[i].department 
             << " | Salary: $" << employees[i].salary << "\n";
    }
}

void searchEmployee() {
    if (employeeCount == 0) {
        cout << "No employee records found.\n";
        return;
    }

    int searchId;
    cout << "Enter Employee ID to search: ";
    cin >> searchId;

    for (int i = 0; i < employeeCount; i++) {
        if (employees[i].id == searchId) {
            cout << "\nEmployee Found:\n";
            cout << "ID: " << employees[i].id << "\n";
            cout << "Name: " << employees[i].name << "\n";
            cout << "Department: " << employees[i].department << "\n";
            cout << "Salary: $" << employees[i].salary << "\n";
            return;
        }
    }
    cout << "Employee with ID " << searchId << " not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n=== Employee Management System ===\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
