#include "../headers/std_lib_facilities.h"


int main()
{
    try {
        vector<char> vector1 = {'q', 'w', 'e', 'r'};
        vector<char> vector2;
        int bulls = 0;
        int cows = 0;
        while (bulls < vector1.size()) {
            // reset bulls and cows.
            bulls = 0;
            cows = 0;
            cout << "Enter four letters: ";
            char input = 0;
            vector2.clear();
            // Add the first four elements (vector1 size) to vector2.
            for (int i = 0; i < vector1.size(); i++) {
                if (cin >> input) vector2.push_back(input);
                else error("You have to enter letters.\n");
            }

            // Take the first four (vector1.size()) characters only.
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');


            // Check if the all values of vector2 are different.
            vector<char> vector2_temp = vector2;
            sort(vector2_temp);
            for (int i = 0; i < vector2_temp.size() - 1; i++) {
                if (vector2_temp[i] ==  vector2_temp[i + 1]) error("You have to enter four different letters.\n");
            }

            for (int i = 0; i < vector1.size(); i++) {
                for (int j = 0; j < vector2.size(); j++) {
                    if (vector1[i] == vector2[j] && i == j) {
                        bulls++;
                    } else if (vector1[i] == vector2[j]) {
                        cows++;
                    }
                }
            }
            cout << "You got " << bulls << " bulls and " << cows << " cows.\n";
        }
        
        return 0;
    } catch (runtime_error& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    } catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    
}