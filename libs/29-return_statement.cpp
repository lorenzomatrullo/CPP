#include <iostream>
#include <cmath>

using namespace std;

double square(double);
double cube(double);
string concactString(string, string);

int main(){

    double length = 5.0;
    string firstName = "Lorenzo";
    string lastName = "Matrullo";


    double area = square(length);
    cout << "Area: " << area << "cm^2\n";

    double volume = cube(length);
    cout << "Volume: " << volume << "cm^3\n";

    string fullName = concactString(firstName, lastName);
    cout << "Hello " << fullName;

    return 0;
}

double square(double length){
    double result = pow(length, 2);
    return result;
}

double cube(double length){
    return pow(length, 3);
}

string concactString(string string1, string string2){
    return string1 + " " + string2; 
}