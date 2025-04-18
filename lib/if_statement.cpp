#include <iostream>

// Do some code only IF some condition is True
// Else do something else

using namespace std;

int main(){

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "Welcome!";
    } else if (age < 0) {
        cout << "You haven't born yet!";
    } else {
        cout << "You are not old enough to join!";
    }


    return 0;
}