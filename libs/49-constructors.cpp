#include <iostream>
using namespace std;

/*
    CONSTRUCTOR = special method that is automatically called when an object is instantiated useful for assigning values to attributes as arguments.

    *Initializing the object's member variables
    *Allocating memory
    *Performing any other setup tasks
*/

class Student {
    public:
        string name;
        int age;
        double gpa;

        Student(string name, int age, double gpa){
            this -> name = name;    // name = x (its the same)
            this -> age = age;      // age = y (its the same)
            this -> gpa = gpa;      // gpa = z (its the same)
        }
};

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

        Car(string make, string model, int year, string color){
            this -> make = make;
            this -> model = model;
            this -> year = year;
            this -> color = color;
        }
};


int main(){

    Student student1("Spongebob", 25, 3.2);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    cout << '\n';

    Car car1("Chevy", "Corvette", 2022, "blue");

    cout << car1.make << '\n';
    cout << car1.model << '\n';
    cout << car1.year << '\n';
    cout << car1.color << '\n';


    return 0;
}