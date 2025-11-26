#include <iostream>
// using namespace std;

/*
    FUNCTION TEMPLATE = describes what a function looks like.

    Can be used to generate as many overloaded functions as needed, each using different data types (int, double, char). 
*/

// int max(int x, int y){
//     return (x > y) ? x : y;         // if true return x, if false return y.
// }

// double max(double x, double y){
//     return (x > y) ? x : y;
// }

// char max(char x, char y){
//     return (x > y) ? x : y;
// }

// as convetion we're used to use letter after the "T"
template <typename T, typename U>

// T max(T x, T y){
//     return (x > y) ? x : y;
// }


// using the "auto" keyword the compiler will deduce what the return type should be
auto max(T x, U y){
    return (x > y) ? x : y;
}


int main(){

    // 1st function template
    // std::cout << max(1, 2) << '\n';

    // 2nd function template
    std::cout << max(1, 2.1) << '\n';

    return 0;
}