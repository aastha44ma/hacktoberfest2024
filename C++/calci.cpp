#include <iostream>

using namespace std;

// Function to perform the addition
double add(double a, double b) {
    return a + b;
}

// Function to perform the subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform the multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform the division
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0; // Returning 0 for simplicity. Handle as needed.
    }
    return a / b;
}

int main() {
    double num1, num2;
    char operation;
    char continueCalc;

    do {
        // Displaying the options
        cout << "Select operation:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "Enter operation: ";
        cin >> operation;

        // Getting numbers from the user
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        // Performing operations based on the selected operation
        switch (operation) {
            case '+':
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }

        // Asking the user if they want to continue
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> continueCalc;

    } while (continueCalc == 'y' || continueCalc == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}
