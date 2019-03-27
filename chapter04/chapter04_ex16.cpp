#include "../headers/std_lib_facilities.h"

int main()
{  
    vector<int> int_vec;
    cout << "Enter integers spearated by spaces: ";
    for (int input; cin >> input;) {
        int_vec.push_back(input);
    }

    int element = 0;
    int count = 0;

    for (int i = 0; i < int_vec.size(); i++) {
        int temp_element = int_vec[i];
        int temp_count = 0;
        for (int j = 0; j < int_vec.size(); j++) {
            if (temp_element == int_vec[j])
                temp_count++;
        }
        if (temp_count > count) {
            count = temp_count;
            element = temp_element;
        }
    }

    cout << "The Mode is: " << element << ". It appeared " << count << " times." << endl;
    return 0;
}