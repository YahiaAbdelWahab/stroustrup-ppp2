#include "../headers/std_lib_facilities.h"

int main()
{
    int grains = 1;
    int squares = 1;
    while (grains < 1000) {
        grains *= 2;
        ++squares;
    }
    cout << "Number of squares required: " << squares << endl;
    cout << "Total Grains : " << grains << endl;
    return 0;
}