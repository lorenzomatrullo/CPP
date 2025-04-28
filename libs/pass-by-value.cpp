#include <iostream>
using namespace std;

/*
    Pass by Value:
    1. When you pass arguments by value, you're essentially making a COPY of the original value and passing that copy to the function.
    2. Changes made to the parameter inside the function won't affect the original value outside the function.
    3. It's like giving someone a photocopy of a document; whatever they do to the photocopy doesn't affect the original document.
*/

void increment(int);

int main() {
    int x = 5;
    increment(x);  // Pass by value

    cout << x;
    // x is still 5 here because the function worked with a copy
    
    return 0;
}

void increment(int num){
    num++;      // Changes made here are local to this function
}