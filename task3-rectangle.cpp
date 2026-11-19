// Task 3 - Rectangle Structure
// This program calculates the area and perimeter of a rectangle.
#include <iostream>
using namespace std;

// Structure to hold rectangle data
struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r; // structure variable

    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;

    // Area = Length x Width
    float area = r.length * r.width;
    // Perimeter = 2 x (Length + Width)
    float perimeter = 2 * (r.length + r.width);

    cout << "\n--- Rectangle Results ---" << endl;
    cout << "Area      : " << area << endl;
    cout << "Perimeter : " << perimeter << endl;

    return 0;
}
