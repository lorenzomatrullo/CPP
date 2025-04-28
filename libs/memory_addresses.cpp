#include <iostream>
using namespace std;

/*
    memory = an array of bytes within RAM
    memory block = a single unit of byte within MEMORY, used to hold some value
    memory address = the address of where a MEMORY BLOCK is located
    It can be accessed with & (address-of operator)
    Memory addresses are likely to change everytime we run the program
*/

int main(){

    string name = "Bro";
    int age = 19;
    bool yes = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &yes << '\n';


    return 0;
}