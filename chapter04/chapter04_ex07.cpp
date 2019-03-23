#include "../headers/std_lib_facilities.h"

int get_input_as_int(string input);

int main()
{
    cout << "Enter two numbers from 0 to 9 followed by an operation: ";
    string operand1, operand2;
    char operation;
    while (cin >> operand1 >> operand2 >> operation) {
            int operand1_as_int = get_input_as_int(operand1);
            int operand2_as_int = get_input_as_int(operand2);

            if (operand1_as_int == -1 || operand2_as_int == -1) {
                cerr << "Invalid Input\n" << "Enter two numbers from 0 to 9 followed by an operation: ";
            } else if (operation == '+') {
                cout << "The sum of " << operand1_as_int << " and " << operand2_as_int << " is " << operand1_as_int + operand2_as_int << endl;
            } else if (operation == '-')   {
                cout << "The difference between " << operand1_as_int<< " and " << operand2_as_int << " is " << operand1_as_int - operand2_as_int << endl;
            } else if (operation == '*') {
                cout << "The product of " << operand1_as_int << " and " << operand2_as_int << " is " << operand1_as_int * operand2_as_int << endl;
            } else if (operation == '/') {
                cout << "The division of " << operand1_as_int << " by " << operand2_as_int << " is " << operand1_as_int / operand2_as_int << endl;
            } else {
                cerr << "Invalid Operation\n" << "Enter two numbers from 0 to 9 followed by an operation: ";
            }
        }
    
    return 0;
}

int get_input_as_int(string input) {

    int result = -1;
    vector<string> string_numbers = 
        {"zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine"};

    vector<string> int_numbers = 
        {"0",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",};


    
    
    for (int i = 0; i < string_numbers.size(); ++i) {
        if (string_numbers[i] == input) {
            result = stoi(int_numbers[i]);
            break;
        }  
    }

    for (int i = 0; i < int_numbers.size(); ++i) {
        if (int_numbers[i] == input) {
            result = stoi(int_numbers[i]);
            break;
        }  
    }
    return result;
    
}