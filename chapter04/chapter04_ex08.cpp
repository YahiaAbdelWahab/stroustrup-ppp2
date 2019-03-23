#include "../headers/std_lib_facilities.h"

int main()
{   
    cout << "Enter the maximum number of grains: ";
    double grains = 1;
    int squares = 1;
    double max_grains;
    cin >> max_grains;
    while (grains < max_grains) {
        grains *= 2;
        ++squares;
    }
    cout << "Number of squares required: " << squares << endl;
    cout << "Total Grains : " << grains << endl;
    return 0;
}