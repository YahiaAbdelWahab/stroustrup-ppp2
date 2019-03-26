#include "../headers/std_lib_facilities.h"

vector<int> get_mutliplies(int x, int limit);

int main()
{  
    vector<int> numbers;

    cout << "Enter the max number: ";
    int max;
    cin >> max;

    for (int i = 1; i <= max; i++) {
        numbers.push_back(i);
    }

    // Remove 1 as it is not a prime number.
    numbers.erase(remove(numbers.begin(), numbers.end(), 1), numbers.end());

    vector<int> multiplies;
    for (int i = 2; i < std::sqrt(max); i++) {
        multiplies = get_mutliplies(i, max);
    
        for (int x : multiplies) {
            numbers.erase(remove(numbers.begin(), numbers.end(), x), numbers.end());
        }
    }
    cout << "The Prime Numbers from 1 to" << max << " are: " << endl;
    for(int number : numbers) {
        cout << number << endl;
    }
    return 0;
}

vector<int> get_mutliplies(int x, int limit) {
    vector<int> mutliplies;
    for (int i = 2; x * i <= limit ; i++) {
        mutliplies.push_back(x * i);
    }
    return mutliplies;
}
