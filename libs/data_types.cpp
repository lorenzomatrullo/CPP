#include <iostream>

using namespace std;

int main(){

    //integers
    int age = 19;
    int year = 2024;

    
    // floats (less precision than doubles)
    float g = 9.81;


    //double (numbers including decimals with more precision)
    double g = 9.80665;
    double gpa = 2.5;


    //single character
    char grade = 'A';
    char initial = 'L';


    //strings (array of characters)
    char name[] = "Lorenzo";
    std::string day = "Friday";
    string address = "Street No. 12"; //or this version if you use using namespace std;


    //boolean (true or false)
    bool yes = true;
    bool no = false;


    // To display a text before calling the variable
    cout << "Address: " << address;


    // To display a text before and after calling the variable
    cout << "You are " << age << " years old";


    return 0;
}