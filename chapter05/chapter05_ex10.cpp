#include "../headers/std_lib_facilities.h"


int main()
{
    vector<double> numbers;
    cout << "Please enter some numbers (press '|' to stop): ";
    for (double input; cin>>input;) numbers.push_back(input);
    
    if (numbers.size() < 2) error("You have to enter at least 2 numbers");

    vector<double> differences;
    for (int i = 0; i < numbers.size() - 1; i++) {
        differences.push_back(numbers[i+1] - numbers[i]);
    }

    for (int i = 0; i < differences.size(); i++) {
        cout << differences[i] << "\n";
    }

    return 0;
}