#include "../headers/std_lib_facilities.h"


int main() {
    try {
        vector<char> numbers_vector;
        cout << "> ";
        for(char input; cin >> input;) {
            if (input == '=') break;
            else numbers_vector.push_back(input);
        }

        if (numbers_vector.size() > 4) error("We can't handle that number.");

        for (int i = 0; i < numbers_vector.size(); i++) {
            int proceeding_digits = 0;
            for (int j = i + 1; j < numbers_vector.size(); j++) {
                proceeding_digits++;
            }
            if (proceeding_digits == 3) cout << to_string(numbers_vector[i]) + " thousand ";
            else if (proceeding_digits == 2) cout << to_string(numbers_vector[i]) + " hundred ";
            else if (proceeding_digits == 1) cout << to_string(numbers_vector[i]) + " tens ";
            else if (proceeding_digits == 0) cout << to_string(numbers_vector[i]) + " ones";
        }
        cout << endl;
        return 0;
    } catch (runtime_error& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    
}