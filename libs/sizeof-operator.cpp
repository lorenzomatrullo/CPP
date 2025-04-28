#include <iostream>

using namespace std;

// sizeof() = determines the size in bytes of a: variable, data type, class, objects, etc.

int main(){

    string name = "Bro Code";
    double gpa = 2.5;
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    string students[] = {"Spongebob", "Patrick"};

    cout << sizeof(students)/sizeof(string) << " elements\n";

    return 0;
}