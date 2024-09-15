#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string firstName, lastName, streetAddress, city;
    int zipCode;

    // Collect input from user
    cout << "Enter First Name: ";
    getline(cin, firstName);
    cout << "Enter Last Name: ";
    getline(cin, lastName);
    cout << "Enter Street Address: ";
    getline(cin, streetAddress);
    cout << "Enter City: ";
    getline(cin, city);
    cout << "Enter Zip Code: ";
    cin >> zipCode;

    // Print the collected information
    cout << "\n--- Fictional Person Information ---\n";
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Address: " << streetAddress << ", " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    return 0;
}
