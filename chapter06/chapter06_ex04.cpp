#include "../headers/std_lib_facilities.h"

bool is_unique(string name);

class Name_value {
    public:
        string name;
        double value;
        Name_value(string n, double v)
            :name(n), value(v) {}
};

vector<Name_value> Name_values;

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
            Name_value name_value = Name_value(name, score);
            Name_values.push_back(name_value);
        } else {
            cerr << "Name entered twice\n";
            break;
        }
    }

     for (int i = 0; i < Name_values.size(); i++) {
         cout << "Name: " << Name_values[i].name << endl
            << "Score: " << Name_values[i].value << endl;
     }
    
    return 0;
}

bool is_unique(string input) {
    for (int i = 0; i < Name_values.size(); i++) {
        if (input == Name_values[i].name) {
            return false;
        }
    }

    return true;
}