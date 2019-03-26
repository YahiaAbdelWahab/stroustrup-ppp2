#include "../headers/std_lib_facilities.h"

string get_winner(string input1, string input2);

int main()
{  
    vector<string> computers_moves = {"rock", "paper", "scissors"};
    int computer_wins = 0;
    int user_wins = 0;
    int draws = 0;
    int i = 0;
    string input = "";
    while (i < 3) {
        cout << "Enter \"rock\", \"paper\" or \"scissors\": " ;
        cin >> input;
        if (!(input == computers_moves[0] || input == computers_moves[1] || input == computers_moves[2])) {
            continue;
        }
        
        
        string computers_choice = computers_moves[rand() % 3];  // Generate a random number from 0 - 2;
        string result = get_winner(computers_choice, input);

        if (result == input) user_wins++;
        else if (result == computers_choice) computer_wins++;
        else if (result == "draw") draws++;

        cout << "Computer choice: " << computers_choice << endl;
        cout << "Result: " << result << endl;
        cout << "User won: " << user_wins << " times" << endl;
        cout << "Computer won: " << computer_wins << " times" << endl;
        cout << draws << " draws" << endl;

        i++;

    }
    return 0;
}


string get_winner(string input1, string input2) {
    if ((input1 == "rock" && input2 == "scissors") || (input1 == "scissors" && input2 == "rock")) {
        return "rock";
    } else if ((input1 == "scissors" && input2 == "paper") || (input1 == "paper" && input2 == "scissors")) {
        return "scissors";
    } else if ((input1 == "rock" && input2 == "paper") || (input1 == "paper" && input2 == "rock")) {
        return "paper";
    } else {
        return "draw";
    }
}