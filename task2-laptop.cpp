// Task 2 - Laptop Structure
// This program stores and displays laptop specifications using a structure.
#include <iostream>
#include <string>
using namespace std;

// Structure to hold laptop data
struct Laptop {
    string brand;
    int ram;      // RAM in GB
    float price;
};

int main() {
    Laptop l; // structure variable

    cout << "Enter laptop brand: ";
    cin >> l.brand;
    cout << "Enter RAM (in GB): ";
    cin >> l.ram;
    cout << "Enter price: ";
    cin >> l.price;

    // Display the laptop specifications
    cout << "\n--- Laptop Specifications ---" << endl;
    cout << "Brand : " << l.brand << endl;
    cout << "RAM   : " << l.ram << " GB" << endl;
    cout << "Price : " << l.price << endl;

    return 0;
}
