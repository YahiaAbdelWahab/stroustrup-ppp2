#include "../headers/std_lib_facilities.h"

vector<int> getMedian(int start, int end);

int main()
{
    int start = 0;
    int end = 100;
    string response = "";
    bool check = true;
    cout << "Please pick a number between 0 and 100" << endl;
    while (check) {
        cout << "Is you number smaller, larger or equal to : " << (start + end) / 2 << "?: (y/n) ";
        cin >> response;
        if (response[0] == 's') {
            end = (start + end) / 2;
        } else if (response[0] == 'l') {
            start = (start + end) / 2;
        } else if (response[0] == 'e') {
            cout << "Your number is " << (start + end) / 2 << endl;
            check = false;
        } 
        else {
            cerr << "Invalid Response.";
        }
    }

    
    return 0;
}