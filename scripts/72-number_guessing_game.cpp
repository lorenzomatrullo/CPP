#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "*****NUMBER GUESSING GAME*****\n";

    do {
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num){
            cout << "Too High!\n";
        } else if (guess < num){
            cout << "Too Low!\n";
        } else {
            cout << "\nCorrect!\n";
            cout << "Number of tries: " << tries;
        }

    } while (guess != num);

    cout << "\n******************************";

    return 0;
}