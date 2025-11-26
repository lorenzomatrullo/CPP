#include <iostream>

/*
    ternary operator = shortcut to if/else statement when assigning/returning a value
    ? = if true
    : = if false
*/

using namespace std;

int main(){


    int x = 100;


    /*
        if(x > 80){
            cout << "yes";
        } else {
            cout << "no";
        }

    */

    // x > 80 ? cout << "yes" : cout << "no";
    cout << (x > 80 ? "yes" : "no"); // another way of use


    return 0;
}