#include <iostream>

using namespace std;

/*
    VARIABLE = Allocated space in memory to store a value. 
    We refer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains.
    BUT we need to declare what type of data we are storing.

    const = a variable that can't be changed
*/

/*
    Local variables = declared inside a function or block {}
    Global variables = declared outside of all functions
*/

int myNum = 2;          // Global variable

void printNum();

int main(){

    int x;              // declaration
    x = 123;            // initialization
    int y = 321;        // declaration + initialization

    int myNum = 0;      // Local variable

    printNum();

    return 0;
}

void printNum(){
    int myNum = 1;      // Local variable
    cout << ::myNum;    // Precede the variable name with the scope resolution operator (::) if you'd rather use the global  variable 
}
