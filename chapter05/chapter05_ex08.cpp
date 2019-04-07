#include "../headers/std_lib_facilities.h"


int main()
{
    cout << "Please enter the number of values you want to sum: ";
    int n = 0;
    cin >> n;
    vector<int> numbers;
    cout << "Please enter some integers (press '|' to stop): ";
    for (int input; cin>>input;) numbers.push_back(input);
    
    if (n > numbers.size()) error("The Reuired N is larger than the entered numbers.\n");
    int sum = 0;
    for (int i = 0; i < n; i++) 
        sum += numbers[i];

    cout << "The sum of the first " << n << " numbers ( ";

    for (int i = 0; i < n; i++) cout << numbers[i] << " ";
    cout << ") is " << sum << "\n";

    return 0;
}