#include <iostream>

using namespace std;

int main(){

    char op;
    double num1;
    double num2;
    double result;

    cout << "**********CALCULATOR**********\n";

    cout << "Enter an operator (+) (-) (*) (/): ";
    cin >> op;

    cout << "Enter the 1st number: ";
    cin >> num1;

    cout << "Enter the 2nd number: ";
    cin >> num2;

    switch(op){
        case '+':
            result =  num1 + num2;
            cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << '\n';
            break;
        default:
            cout << "That was not a valid response\n";
    }

    cout << "******************************";

    return 0;
}