#include <iostream>

using namespace std;

/*
    pointer = variable that stores a memory address of another variable.
    * = dereferencing the pointer to actually get to value of what it is pointing to
*/

int main(){

    int max = 100;
    int *pMax = &max;
    // as a convention to declare a pointer we use "p before the actual variable name and the next character will be uppercase"

    cout << "ADDRESS of Max: " << &max << '\n';
    cout << "ADDRESS of pMax: "<< pMax << '\n';
    cout << "VALUE of Max: "<< max <<  '\n';
    cout << "VALUE of pMax: " << *pMax << '\n';

    *pMax += 1;
    cout << "VALUE incremented: " << *pMax;
    


    return 0;
}