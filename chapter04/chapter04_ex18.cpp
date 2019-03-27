#include "../headers/std_lib_facilities.h"

int main()
{  
    cout << "This program solves quadratic functions.\n"
        << "Enter \"a\", \"b\" and \"c\" separated by spaces: ";
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    double x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    double x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    cout << "X1: " << x1 << endl
        << "X2: " << x2 << endl;

    return 0;
}