#include "../headers/std_lib_facilities.h"

bool is_prime(int x);

vector<int> prime_numbers_vec;

int main()
{  
    int number_of_primes_needed;
    cout << "How many prime numbers needed? ";
    cin >> number_of_primes_needed;
    if (number_of_primes_needed > 0) {
        prime_numbers_vec.push_back(2);
    } 
    else {
        cerr << "Error. You have to enter a positive integer.\n"; 
        return -1;
    } 
    int current_number = 3;
    while (prime_numbers_vec.size() < number_of_primes_needed) {
        if (is_prime(current_number)) prime_numbers_vec.push_back(current_number);
        current_number += 1;
    }

    cout << "The " << number_of_primes_needed << " prime numbers are: " << endl;
    for (int prime : prime_numbers_vec) {
        cout << prime << endl;
    }
    return 0;
}

bool is_prime(int x) {
    for (int i = 0; i < prime_numbers_vec.size(); i++)
        if (x % prime_numbers_vec[i] == 0) return false;
    
    return true;
}