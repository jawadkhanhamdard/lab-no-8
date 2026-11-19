// Task 4 - GPA Comparison
// This program compares the GPA of two students.
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
    Student s1, s2; // two structure variables

    cout << "Enter name roll gpa for student 1: ";
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout << "Enter name roll gpa for student 2: ";
    cin >> s2.name >> s2.roll >> s2.gpa;

    cout << "\n--- Result ---" << endl;
    if (s1.gpa > s2.gpa) {
        cout << "Higher GPA: " << s1.name << " (Roll " << s1.roll
             << ", GPA " << s1.gpa << ")" << endl;
    } else if (s2.gpa > s1.gpa) {
        cout << "Higher GPA: " << s2.name << " (Roll " << s2.roll
             << ", GPA " << s2.gpa << ")" << endl;
    } else {
        cout << "Both students have equal GPA" << endl;
    }

    return 0;
}
