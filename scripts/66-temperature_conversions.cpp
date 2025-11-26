#include <iostream>
#include <cctype>

using namespace std;

int main(){

    char unit;
    double temp;

    cout << "*****TEMPERATURE CONVERSION*****\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celsius\n";
    cout << "What unit would you like to convert to (F) or (C): ";
    cin >> unit;

    unit = toupper(unit); // lowercase letters will be turned into uppercase

    if(unit == 'C'){
        cout << "Enter the temperature in Farenheit: ";
        cin >> temp;

        temp = (temp * 9 / 5) + 32;
        cout << "The temperature is: " << temp << "C";
    } else if (unit == 'F'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;

        temp = ((temp - 32) * 5) / 9;
        cout << "The temperature is: " << temp << "F";
    } else {
        cout << "That is not a valid unit of measurement";
    }


    cout << "\n********************************";


    return 0;
}