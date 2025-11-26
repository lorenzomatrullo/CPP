#include <iostream>
using namespace std;

/*
    ENUMS = a user-defined data type that consists of paired named-integer constants.

    GREAT if you have a set of potential options
*/

enum Day {
    Sun = 1, 
    Mon = 2, 
    Tue = 3, 
    Wed = 4, 
    Thu = 5, 
    Fri = 6, 
    Sat = 7
};

enum Planet {
    mercury = 8480,
    venus = 12104,
    earth = 12756,
    mars = 6794,
    jupiter = 142984,
    saturn = 108728,
    uranus = 51118,
    neptune = 49532,
    pluto = 2320
};

enum Flavor {vanilla, chocolate, strawberry, mint};

enum Color {red, orange, yellow, green, blue, purple};


int main(){

    Day today = Sun;

    if (today == Sun || today == Sat) {
        cout << "It's the weekend!";
    } else {
        cout << "I have to work today";
    }


    return 0;
}