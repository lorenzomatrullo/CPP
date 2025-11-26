#include <iostream>

/*
    Typedef = reserved keyword used to create an additional name for another data type.
    New identifier for an existing type.
    Helps with readability and reduces typos.

    Mostly Repleace with "using" in C++ (work better w/ templates)
*/


// typedef std::string text_t;
// _t at the end of the keyword is used as a convention for typedefs
using text_t = std::string;


// typedef int number_t;
using number_t = int;



int main(){

    text_t name = "Lorenzo";
    number_t age = 19;

    std::cout << name << '\n';
    std::cout << age;

    return 0;
}