#include <iostream>

using namespace std;

/*
    DO WHILE LOOP = do some block of code first, THEN repeat again if the condition is trueà
*/

int main(){

    int number;

    do{
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number < 0);

    cout << "The number is: " << number;


    return 0;
}