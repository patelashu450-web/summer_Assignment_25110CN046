#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;
    cout << "--- STUDENT MARKSHEET GENERATOR ---" << endl;
    cout << "Enter Student Name: ";
    getline(cin, name);
    
    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter marks for 5 subjects (out of 100): " << endl;
    cout << "Subject 1: "; cin >> m1;
    cout << "Subject 2: "; cin >> m2;
    cout << "Subject 3: "; cin >> m3;
    cout << "Subject 4: "; cin >> m4;
    cout << "Subject 5: "; cin >> m5;
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    if (percentage >= 90) grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else grade = 'F';
    
    cout << "\n===================================" << endl;
    cout << "           STUDENT MARKSHEET       " << endl;
    cout << "===================================" << endl;
    cout << "Name        : " << name << endl;
    cout << "Roll No     : " << roll << endl;
    cout << "-----------------------------------" << endl;
    cout << "Subject 1   : " << m1 << "/100" << endl;
    cout << "Subject 2   : " << m2 << "/100" << endl;
    cout << "Subject 3   : " << m3 << "/100" << endl;
    cout << "Subject 4   : " << m4 << "/100" << endl;
    cout << "Subject 5   : " << m5 << "/100" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Total Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;
    cout << "===================================" << endl;

    return 0;
}
