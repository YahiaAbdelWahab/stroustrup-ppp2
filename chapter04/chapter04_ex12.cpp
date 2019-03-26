#include "../headers/std_lib_facilities.h"

bool is_prime(int x);

vector<int> prime_numbers;

int main()
{  
    int max = 0;
    cout << "Enter max value: ";
    cin >> max;
    prime_numbers.push_back(2); // Smallest prime number.

    for (int i = 3; i <= max; i++) {
        if (is_prime(i))
            prime_numbers.push_back(i);
    }

    for (int i = 0; i < prime_numbers.size(); i++) {
        cout << prime_numbers[i] << endl;
    }

    return 0;
}


bool is_prime(int x) {
    for (int i = 0; i < prime_numbers.size(); i++)
        if (x % prime_numbers[i] == 0) return false;
    
    return true;
}