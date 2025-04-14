#include <iostream>
#include <conio.h>  // For clrscr() and getch()

using namespace std;

int main() {
    double num1, num2;
    char choice;
    
    clrscr();  // Clears the screen in Turbo C++

    do {
        // Taking user input
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Performing calculations
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;

        // Handling division by zero
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Division by zero is not allowed!" << endl;
        }

        // Asking user if they want to continue
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;

    getch();  // Waits for user input before closing the program
    return 0;
}
