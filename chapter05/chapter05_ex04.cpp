#include "../headers/std_lib_facilities.h"


double ctok(double c) // converts Celsius to Kelvin
{
    if (c < -273.15) {
        error("The lowest temperature that can be reached is –273.15°C\n");
    }
    int k = c + 273.15;
    return k;
}

int main()
{
    try {
        double c = 0; // declare input variable
        cin >> c; // retrieve temperature to input variable
        double k = ctok(c); // convert temperature
        cout << k << "K\n" ; 
        return 0;
    } catch (runtime_error& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    } catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 2;
    } catch (...) {
        cerr << "Oops: unknown exception!\n";
        return 3;
    }
    
}