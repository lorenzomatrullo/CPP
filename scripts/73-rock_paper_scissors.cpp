#include <iostream>
#include <cctype>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char);
void chooseWinner(char, char);

int main(){

    char player;
    char computer;
    
    player = getUserChoice();
    cout <<  "\nYou choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice(){
    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do {
        cout << "\nChoose one of the following\n";
        cout << "*************************\n";
        cout << "'R' for rock\n";
        cout << "'P' for paper\n";
        cout << "'S' for scissors\n";
        cin >> player;

        player = toupper(player);

    } while (player != 'R' && player != 'P' && player != 'S');

    return player;
}

char getComputerChoice(){
    
    srand(time(0));

    int num = (rand() % 3) + 1;

    switch(num){
        case 1:
            return 'R';
        case 2:
            return 'P';
        case 3:
            return 'S';
    }

    return 0;
}

void showChoice(char choice){

    switch(choice){
        case 'R':
            cout << "Rock\n";
            break;
        case 'P':
            cout << "Paper\n";
            break;
        case 'S':
            cout << "Scissors\n";
            break;
    }
}

void chooseWinner(char player, char computer){

    switch(player){
        case 'R':
            if (computer == 'R') {
                cout << "It's a tie!\n";
            } else if (computer == 'P') {
                cout << "You lose!\n";
            } else {
                cout << "You won!\n";
            }
            break;
        case 'P':
            if (computer == 'P') {
                cout << "It's a tie!\n";
            } else if (computer == 'R') {
                cout << "You lose!\n";
            } else {
                cout << "You won!\n";
            }
            break;
        case 'S':
            if (computer == 'S') {
                cout << "It's a tie!\n";
            } else if (computer == 'R') {
                cout << "You lose!\n";
            } else {
                cout << "You won!\n";
            }
            break;
    }
}