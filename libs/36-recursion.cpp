#include <iostream>
using namespace std;

/*
    RECURSION = a programming technique where a function invokes itself from within aa break a complex into a repeatable single step.

    (iterative vs recursive)

    ADVANTAGES = less code and is cleaner, useful for sorting and searching algorithms.

    DISADVANTAGES = uses more memory, slower.
*/

// void walk(int);
int factorial(int);

int main(){

    // walk(100);
    cout << factorial(4);

    return 0;
}

// void walk(int steps){
    
//     // ITERATIVE
//     for (int i = 0; i < steps; i++) {
//         cout << "You take a step!\n";
//     }

//     // RECURSIVE
//     if (steps > 0) {
//         cout << "You take a step!\n";
//         walk(steps - 1);
//     }
// }

int factorial(int num){

    // ITERATIVE
    // int result = 1;

    // for (int i = 1; i <= num; i++) {
    //     result = result * i;
    // }

    // return result;

    // RECURSIVE
    if (num > 1) {
        return num * factorial(num - 1);
    } else {
        return 1;
    }
}