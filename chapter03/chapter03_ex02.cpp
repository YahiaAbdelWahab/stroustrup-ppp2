#include "../headers/std_lib_facilities.h"

int main()
{
    int miles = 0;
    cout << "Please enter a number of miles: ";
    cin >> miles;
    cout << "There is " << miles * 1.609 << " kilometers in " << miles << " miles.\n";
    return 0;
}