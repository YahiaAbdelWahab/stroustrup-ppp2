#include "../headers/std_lib_facilities.h"

vector<int> get_mutliplies(int x, int limit);

int main()
{  
    vector<int> numbers;

    for (int i = 1; i <= 100; i++) {
        numbers.push_back(i);
    }

    // Remove 1 as it is not a prime number.
    numbers.erase(remove(numbers.begin(), numbers.end(), 1), numbers.end());

    vector<int> multiplies;
    for (int i = 2; i < std::sqrt(100); i++) {
        multiplies = get_mutliplies(i, 100);
    
        for (int x : multiplies) {
            numbers.erase(remove(numbers.begin(), numbers.end(), x), numbers.end());
        }
    }
    
    for(int number : numbers) {
        cout << number << endl;
    }

    cout << "size: " << numbers.size() << endl;
    cout << "mutliplies: " << multiplies.size() << endl;
    return 0;
}

vector<int> get_mutliplies(int x, int limit) {
    vector<int> mutliplies;
    for (int i = 2; x * i <= limit ; i++) {
        mutliplies.push_back(x * i);
    }
    return mutliplies;
}
