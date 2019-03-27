#include "../headers/std_lib_facilities.h"

bool is_unique(string name);

vector<string> names;
vector<int> scores;

int main()
{  
    
    cout << "Enter a name and a score: ";
    string name;
    int score;
    while (cin >> name >> score) {
        if (name == "NoName" && score == 0) {
            break;
        }

        if (is_unique(name)) {
            names.push_back(name);
            scores.push_back(score);
        } else {
            cerr << "Name entered twice\n";
            break;
        }
    }

     for (int i = 0; i < names.size(); i++) {
         cout << "Name: " << names[i] << endl
            << "Score: " << scores[i] << endl;
     }
    
    return 0;
}

bool is_unique(string input) {
    for (string name : names) {
        if (input == name) {
            return false;
        }
    }

    return true;
}