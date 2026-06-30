#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string position;
    double salary;
};
void addEmployee(vector<Employee>& employees) {
    Employee emp;
    cout << "Enter ID: ";
    cin >> emp.id;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, emp.name);
    cout << "Enter Position: ";
    getline(cin, emp.position);
    cout << "Enter Salary: ";
    cin >> emp.salary;
    employees.push_back(emp);
    cout << "Employee added successfully.\n";
}
void displayEmployees(const vector<Employee>& employees) {
    if (employees.empty()) {
        cout << "No records found.\n";
        return;
    }
    for (const auto& emp : employees) {
        cout << "ID: " << emp.id 
             << " | Name: " << emp.name 
             << " | Position: " << emp.position 
             << " | Salary: $" << emp.salary << "\n";
    }
}
void searchEmployee(const vector<Employee>& employees) {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;
    for (const auto& emp : employees) {
        if (emp.id == id) {
            cout << "Found - Name: " << emp.name 
                 << ", Position: " << emp.position 
                 << ", Salary: $" << emp.salary << "\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}
void deleteEmployee(vector<Employee>& employees) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->id == id) {
            employees.erase(it);
            cout << "Employee deleted successfully.\n";
            return;
        }
    }
    cout << "Employee not found.\n";
}
int main() {
    vector<Employee> employees;
    int choice;
    do {
        cout << "\n--- Employee Management System ---\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Delete Employee\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: addEmployee(employees); break;
            case 2: displayEmployees(employees); break;
            case 3: searchEmployee(employees); break;
            case 4: deleteEmployee(employees); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);
    return 0;
}
