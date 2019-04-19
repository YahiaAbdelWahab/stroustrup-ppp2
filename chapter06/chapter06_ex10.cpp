#include "../headers/std_lib_facilities.h"

double factorial(double x) {
    if (x == 0) {
        return 1;
    } else {
        double factorial = 1;
        while (x > 1) {
            factorial *= x;
            x--;
        }
        return factorial;
    }
}

double permutation(double a, double b) {
    if (a<b || a<1 || b<1) error("bad permutation sizes");

    return factorial(a) / factorial(a-b);
}

double combination(double a, double b) {
    return permutation(a, b) / factorial(b);
}

int main() {
    try {
        cout << "Do you want to calculate permuatations(p) or combinations(c)? ";
        char p_c = 0;
        cin >> p_c;
        if (p_c != 'p' && p_c != 'c') error("You have to enter 'p' or 'c'.\n");

        cout << "Enter 'a' and 'b': ";
        int a = 0;
        int b = 0;
        cin >> a >> b;
        if (!cin) error("You have to enter numbers.\n");
        double result = 0;
        switch (p_c)
        {
            case 'p':
                result = permutation(a, b);
                cout << "aPb is " + to_string(result) + "\n";
                break;
            case 'c':
                result = combination(a, b);
                cout << "aCb is " + to_string(result) + "\n";
                break;
            default:
                break;
        }
        return 0;
    } catch (runtime_error& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    
}