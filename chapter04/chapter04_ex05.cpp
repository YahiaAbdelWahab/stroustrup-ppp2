#include "../headers/std_lib_facilities.h"

int main()
{
    double operand1 = -1, operand2 = -1;
    char operation = 0;
    cout << "Enter two numbers followed by an operation: ";
    cin >> operand1 >> operand2 >> operation;
    switch (operation)
    {
        case '+':
            cout << "The sum of " << operand1 << " and " << operand2 << " is " << operand1 + operand2 << endl;
            break;

        case '-':
            cout << "The difference between " << operand1 << " and " << operand2 << " is " << operand1 - operand2 << endl;
            break;

        case '*':
            cout << "The product of " << operand1 << " and " << operand2 << " is " << operand1 * operand2 << endl;
            break;

        case '/':
            cout << "The division of " << operand1 << " by " << operand2 << " is " << operand1 / operand2 << endl;
            break;
    
        default:
            cout << "Invalid operation." << endl;
            break;
    }
    return 0;
}