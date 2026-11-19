// Task 1 - Student Structure
// This program stores and displays student information using a structure.
#include <iostream>
#include <string>
using namespace std;

// Structure to hold student data
struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s; // structure variable

    cout << "Enter student name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter GPA: ";
    cin >> s.gpa;

    // Display the stored information
    cout << "\n--- Student Information ---" << endl;
    cout << "Name : " << s.name << endl;
    cout << "Roll : " << s.roll << endl;
    cout << "GPA  : " << s.gpa << endl;

    return 0;
}
