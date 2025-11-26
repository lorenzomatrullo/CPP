#include <iostream>

 /*
    && (AND) = checks if 2 conditions are true
    || (OR) = checks if the last condition is true
    ! (NOT) = reverses the state of a condition
*/

using namespace std;

int main(){

    int temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;

    if(temperature >= 0 && temperature < 30){
        cout << "The weather is good";
    } else {
        cout << "The Weather is bad";
    }


    return 0;
}