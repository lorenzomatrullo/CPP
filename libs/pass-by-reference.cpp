#include <iostream>
using namespace std;

/*
    Pass by Reference:
    1. When you pass arguments by reference, you're essentially giving the function direct access to the original value's memory location.
    2. Changes made to the parameter inside the function will affect the original value outside the function.
    3. It's like giving someone the original document itself; any changes they make will reflect on the original document.
*/

void increment(int &);

int main() {
    int x = 5;
    increment(x);  // Pass by reference

    cout << x;
    // Now x is 6 because the function worked directly with the original value
    
    return 0;
}

void increment(int &num){
    num++;      // Changes made here affect the original value
}