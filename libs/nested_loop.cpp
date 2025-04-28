#include <iostream>

using namespace std;

int main(){

    int rows;
    cout << "How many rows?: ";
    cin >> rows;

    int columns;
    cout << "How many columns: ";
    cin >> columns;

    char symbol;
    cout << "Enter a symbol to use: ";
    cin >> symbol;


    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol << ' ';
        }
        cout << '\n';
    }


    return 0;
}