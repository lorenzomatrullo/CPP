#include <iostream>
using namespace std;

/*
    Static Variable: A static variable retains its value throughout the entire runtime of the program.
    It's initialized once and keeps its value until the program terminates.

    Normal Variable: A normal variable typically exists only within the scope where it's defined. 
    Variable gets re-initialized everytime its called.   
*/


void variable();
void staticVariable();

int main() {

    variable(); // Output: Normal Variable: 1
    variable(); // Output: Normal Variable: 1 (Variable re-initialized)

    cout << '\n';

    staticVariable(); // Output: Static Variable: 1
    staticVariable(); // Output: Static Variable: 2 (Variable retains its value)
    
    return 0;
}


void variable() {
    int x = 0; // Normal variable
    x++; // Increment the normal variable
    cout << "Normal Variable: " << x << '\n';
}

void staticVariable() {
    static int staticVar = 0; // Static variable
    staticVar++; // Increment the static variable
    cout << "Static Variable: " << staticVar << '\n';
}