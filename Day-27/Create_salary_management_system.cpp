#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 50;
class Employee {
private:
    int id;
    string name;
    string designation;
    double basicSalary;
    double allowance;
    double deductions;
    double netSalary;
public:
    Employee() {
        id = 0;
        basicSalary = 0.0;
        allowance = 0.0;
        deductions = 0.0;
        netSalary = 0.0;
    }
    void calculateSalary() {
        netSalary = (basicSalary + allowance) - deductions;
    }
    void inputRecord() {
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Designation: ";
        getline(cin, designation);
        
        cout << "Enter Basic Salary ($): ";
        cin >> basicSalary;
        
        cout << "Enter Allowances ($): ";
        cin >> allowance;
        
        cout << "Enter Deductions/Tax ($): ";
        cin >> deductions;
        
        calculateSalary();
        cout << "\nRecord added successfully!\n";
    }
    void displayRecord() const {
        cout << "\n========================================\n";
        cout << "          EMPLOYEE PAYSLIP              \n";
        cout << "========================================\n";
        cout << "ID          : " << id << "\n";
        cout << "Name        : " << name << "\n";
        cout << "Designation : " << designation << "\n";
        cout << "----------------------------------------\n";
        cout << "Basic Salary: $" << basicSalary << "\n";
        cout << "Allowances  : $" << allowance << "\n";
        cout << "Deductions  : $" << deductions << "\n";
        cout << "----------------------------------------\n";
        cout << "NET PAYABLE : $" << netSalary << "\n";
        cout << "========================================\n";
    }
    int getId() const {
        return id;
    }
    void modifySalary() {
        cout << "Current Basic Salary: $" << basicSalary << " -> Enter New: ";
        cin >> basicSalary;
        cout << "Current Allowances: $" << allowance << " -> Enter New: ";
        cin >> allowance;
        cout << "Current Deductions: $" << deductions << " -> Enter New: ";
        cin >> deductions;
        calculateSalary();
        cout << "\nSalary details updated successfully!\n";
    }};
int main() {
    Employee employees[MAX_EMPLOYEES];
    int currentEmployeeCount = 0;
    int choice;
    while (true) {
        cout << "\n========================================\n";
        cout << "       SALARY MANAGEMENT SYSTEM         \n";
        cout << "========================================\n";
        cout << "1. Add New Employee Record\n";
        cout << "2. Display All Employee Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Modify Employee Salary\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            if (currentEmployeeCount < MAX_EMPLOYEES) {
                employees[currentEmployeeCount].inputRecord();
                currentEmployeeCount++;
            } else {
                cout << "\nSystem storage limit reached! Cannot add more employees.\n";
            }
        } 
        else if (choice == 2) {
            if (currentEmployeeCount == 0) {
                cout << "\nNo records found in the system.\n";
            } else {
                for (int i = 0; i < currentEmployeeCount; i++) {
                    employees[i].displayRecord();
                }
            }
        } 
        else if (choice == 3) {
            if (currentEmployeeCount == 0) {
                cout << "\nNo records found to search.\n";
            } else {
                int searchId;
                bool found = false;
                cout << "Enter Employee ID to search: ";
                cin >> searchId;
                
                for (int i = 0; i < currentEmployeeCount; i++) {
                    if (employees[i].getId() == searchId) {
                        employees[i].displayRecord();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nEmployee with ID " << searchId << " not found.\n";
                }
            }
        } 
        else if (choice == 4) {
            if (currentEmployeeCount == 0) {
                cout << "\nNo records available to modify.\n";
            } else {
                int targetId;
                bool found = false;
                cout << "Enter Employee ID to update salary: ";
                cin >> targetId;
                
                for (int i = 0; i < currentEmployeeCount; i++) {
                    if (employees[i].getId() == targetId) {
                        employees[i].modifySalary();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "\nEmployee with ID " << targetId << " not found.\n";
                }
            }
        } 
        else if (choice == 5) {
            cout << "\nExiting system. Have a great day!\n";
            break;
        } 
        else {
            cout << "\nInvalid input! Please enter a number between 1 and 5.\n";
        }
    }

    return 0;
}
