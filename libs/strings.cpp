#include <iostream>

using namespace std;

int main(){

    string name;

    cout << "Enter your name: ";
    getline(cin, name);


    // gives a condition of length
    if(name.length() > 12){
        cout << "Your name can't be over 12 characters" << '\n';
    } else {
        cout << "Welcome " << name << '\n';
    }

    
    // give a condition
    if(name.empty()){
        cout << "You did not enter your name" << '\n';
    } else {
        cout << "Welcome " << name << '\n';
    }


    // clears the name
    name.clear();
    cout << "Hello " << name << '\n';


    name.append("@gmail.com");
    cout << "Your username is now " << name << '\n';


    // only shows the letter at the position chose
    cout << name.at(0) << '\n';


    // inserts the choosen character before the choosen position of the string
    name.insert(0, "@");
    cout << name << '\n';


    // erases from the start to the end point
    name.erase(0, 3);
    cout << name << '\n';

    // gives the size
    cout << name.size();


    // go to https://cplusplus.com/reference/string/string for more

    return 0;
}