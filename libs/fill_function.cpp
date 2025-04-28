#include <iostream>

using namespace std;

/*
    fill() = Fills a range of elements with a specified value
             fill(begin, end, value) as syntax
*/


int main(){

    // I want to fill 10 times the array with the word "pizza"
    // string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"};

    const int SIZE = 99;
    string foods[SIZE];

    fill(foods, foods + (SIZE/3), "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");

    for(string food : foods){
        cout << food << '\n';
    }


    return 0;
}