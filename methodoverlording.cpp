#include <iostream>
#include <conio.h>  

using namespace std;

int main() {
    double num1, num2;
    char choice;
    
    clrscr(); 

    do {
        // Taking user input
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;

        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Division by zero is not allowed!" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;

    getch();  // Waits for user input before closing the program
    return 0;
}
