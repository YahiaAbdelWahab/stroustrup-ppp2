#include "../headers/std_lib_facilities.h"


int main()
{
    vector<int> day_vector;
    vector<string> days_of_week = {
        "sunday",
        "sun",
        "monday",
        "mon",
        "tuesday",
        "tue",
        "wednesday",
        "wed",
        "thursday",
        "thu",
        "friday",
        "fri",
        "saturday",
        "sat"
    };

    cout <<"Enter day-of-the-week followed by a value: ";
    string input = "";
    int value = 0;
    int rejected_values = 0;
    while (cin >> input >> value) {
        bool accepted = false;
        for (string day_of_week : days_of_week) {
            transform(input.begin(), input.end(), input.begin(), ::tolower);
            if (day_of_week == input) {
                day_vector.push_back(value);
                accepted = true;
            }
        }
        if (!accepted) rejected_values++;
    }

    int sum = 0;
    for (int i : day_vector) {
        sum += i;
    }
    cout << "Sum of the values: " << sum << "\n"
    << "Number of rejected values " << rejected_values << "\n";
    return 0;
}