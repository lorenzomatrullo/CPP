#include <iostream>
using namespace std;

/*
    STRUCT = a structure that group releated variabless, under one name.

    structs can contain many different data types (string, int, double, bool, etc.)
    variables in a struct are known as "members".
    members can be access with "." = Class Member Access Operator
*/

struct student{
    string name;
    double gpa;
    bool enrolled;
};

int main(){

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student1.enrolled =  true;

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled =  true;

    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    cout << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';



    return 0;
}