#include "../headers/std_lib_facilities.h"


double ctok(double c) // converts Celsius to Kelvin
{
    if (c < -273.15) {
        error("The lowest temperature that can be reached is –273.15°C\n");
    }
    double k = c + 273.15;
    return k;
}

double ktoc(double k) // converts Kelvin to Celsius
{
    if (k < 0) {
        error("The lowest temperature that can be reached is 0K\n");
    }
    double c = k - 273.15;
    return c;
}

int main()
{
    try {
        cout << "Enter a temperature followed by K or C: ";
        double t = 0; // declare input variable
        char unit = 0;
        cin >> t >> unit; // retrieve temperature to input variable
        double converted_t = 0;
        switch (unit)
        {
            case 'C':
                converted_t = ctok(t);
                cout << converted_t << "K\n";
                break;
            case 'K':
                converted_t = ktoc(t);
                cout << converted_t << "C\n";
                break;
            default:
                error("Unknown unit.\n");
                break;
        }
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