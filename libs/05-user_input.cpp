#include <iostream>
using namespace std;

/*
    FLOW OPERATORS:
    << output
    >> input
*/


int main(){

    string full_name;
    cout << "Enter your full name: ";

    // cin >> full_name;                        // will only display the first word
    getline(cin, full_name);                    // will display the entire string (can only be used with string function because it is a C++ function)

    cout << "You entered: " << full_name;


    return 0;
}