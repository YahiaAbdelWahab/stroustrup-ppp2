#include "../headers/std_lib_facilities.h"


int main()
{
    int n = 1;
    int m = 2;
    while (n < m) {
        int x = n + m;
        n = m;
        m = x;
    }

    cout << "the largest Fibonacci number that fits in an int is " << n << '\n';
    return 0;
}