#include "../headers/std_lib_facilities.h"

int main()
{
    int value;
    cout << "Please enter an integer number: ";
    cin >> value;
    string result = (value % 2) ? "odd" : "even";
    cout << result << endl;
    return 0;
}