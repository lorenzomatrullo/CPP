#include <iostream>

using namespace std;

/*
    WHILE LOOP = repeats a section of code until the condition is satisfied
*/

int main(){

    string name;

    while(name.empty()){
        cout << "Enter your name: ";
        getline(cin, name);
    }

    cout << "Hello " << name;


    return 0;
}