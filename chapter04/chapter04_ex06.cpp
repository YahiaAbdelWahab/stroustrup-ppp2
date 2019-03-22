#include "../headers/std_lib_facilities.h"

int main()
{
    
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

    cout << "Enter a digit between 0 and 9: ";
    
    for (string input; cin >> input;) {
        for (int i = 0; i < string_numbers.size(); ++i) {
            if (string_numbers[i] == input) {
                cout << int_numbers[i] << endl;
                break;
            }  
        }

        for (int i = 0; i < int_numbers.size(); ++i) {
            if (int_numbers[i] == input) {
                cout << string_numbers[i] << endl;
                break;
            }  
        }
    }
    
    return 0;
}