#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(0));

    int randomNumber = (rand() % 5) + 1;

    switch(randomNumber){
        case 1: 
            cout << "You won a t-shirt";
            break;
        case 2: 
            cout << "You won a bottom";
            break;
        case 3: 
            cout << "You won a hoodie";
            break;
        case 4: 
            cout << "You won a pair of shoes";
            break;
        case 5: 
            cout << "You won an accessory";
            break;
    }


    return 0;
}