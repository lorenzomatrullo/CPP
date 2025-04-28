#include <iostream>
using namespace std;

/*
    CONST PARAMETER = parameter that is effectively read-only code is more secure & conveys intent useful for references and pointers.
*/

void printInfo(const string &, const int &);

int main(){

    string name = "Bro";
    int age = 21;

    printInfo(name, age);


    return 0;
}

void printInfo(const string &name, const int &age){
    cout << name << '\n';
    cout << age << '\n';
}