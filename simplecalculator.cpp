#include <iostream>
using namespace std;

int main() {
    char operat;
    float num1, num2, res;
    
    // Prompting user to enter numbers
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    
    // Prompting user to select an operator
    cout << "Place an operator to use (+, -, *, /): ";
    cin >> operat;
    
    // Performing calculation based on the operator
    switch (operat) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        default:
            cout << "Invalid operator placed!";
            return 1;
    }
    
    // Displaying the result
    cout << "The result is: " << res;
    
    return 0;
}
