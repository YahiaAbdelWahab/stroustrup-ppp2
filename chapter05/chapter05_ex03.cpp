#include "../headers/std_lib_facilities.h"


double ctok(double c) // converts Celsius to Kelvin
{
    int k = c + 273.15;
    return k;
}

int main()
{
    double c = 0; // declare input variable
    cin >> c; // retrieve temperature to input variable
    if (c < -273.15) {
        cerr << "The lowest temperature that can be reached is –273.15°C\n";
        return 1;
    }  
    double k = ctok(c); // convert temperature
    cout << k << "K\n" ; 
    return 0;
}