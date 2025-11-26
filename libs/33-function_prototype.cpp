#include <iostream>

using namespace std;

/*
    function prototype = allows you to type functions after the main
*/

void happyBirthday(string);


int main(){

    string name = "Bro";

    happyBirthday(name);

    return 0;
}


void happyBirthday(string name){
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
    cout << "Happy Birthday to " << name << '\n';
}