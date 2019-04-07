#include "../headers/std_lib_facilities.h"

//f = 9.0/5.0 * c + 32
double ctof(double c) // converts Celsius to Kelvin
{
    double f = 9.0/5.0 * c + 32;
    return f;
}

int main()
{
    cout << "Enter a celsius temperature: ";
    double c = 0; // declare input variable
    cin >> c; // retrieve temperature to input variable
    double f = ctof(c);
    cout << f << "°F\n";
    return 0;
}