#include <iostream>
#include <cctype>
using namespace std;


int main(){


    string questions[] = {
        "1) What year was C++ created?: ",
        "2) Who invented C++?: ",
        "3) What is the predecessor of C++: "
    };

    string options[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
        {"A. C", "B. C+", "C. C--", "D. B++"}
    };

    char answerKey[] = {'C', 'B', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        cout << '\n';
        cout << questions[i] << '\n';

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i]) {
            cout << "CORRECT\n";
            score++;
        } else {
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    cout << "\n***********************\n";
    cout << "*       RESULTS       *\n";
    cout << "***********************\n";
    cout << "CORRECT GUESSES: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << (score/(double)size)*100 << "%";

    return 0;
}