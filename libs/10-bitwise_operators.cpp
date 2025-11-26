#include <iostream>
using namespace std;


// BITWISE OPERATORS = special operators used in bit level programming (knowing binary is important for this topic)

/*
    & = AND
    | = OR
    ^ = XOR
    << = LEFT SHIFT
    >> = RIGHT SHIFT
*/


int main(){

    int x = 6;      // 6 = 00000110
    int y = 12;     //12 = 00001100
    int z = 0;      // 0 = 00000000


    z = x & y;
    cout << "AND = " << z << '\n';


    z = x | y;
    cout << "OR = " << z << '\n';


    z = x ^ y;
    cout << "XOR = " << z << '\n';


    z = x << 1;
    cout << "LEFT SHIFT = " << z << '\n';
    // when left shifting the binary number actually doubles

    
    z = x >> 1;
    cout << "RIGHT SHIFT = " << z << '\n';
    // when right shifting the binary number actually divides by 2


    return 0;
}