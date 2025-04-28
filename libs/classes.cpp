#include <iostream>
using namespace std;

/*
    CLASS = a user-defined data type that serves as a blueprint for creating objects.

    OBJECT = a collection of attributes and methods.
    *attributes = characteristics of an object
    *methods = functions that an object can perform

    They can have characteristics and could perform actions

    Can be used to mimic real world items (ex. Phone, Book, Dog)

    Created from a class which acts as a "blue-print"
*/

/*
    ACCESS SPECIFIERS:

    public: allows to change the settings by anyone
    private: does not allow anyone to change the settings
    protected: inheritance classes can access the settings
*/


class Human {
    public:
        string name = "Rick";
        string occupation = "scientist";
        int age = 30;

        void eat(){
            cout << "This person is eating\n";
        }

        void drink(){
            cout << "This person is drinking\n";
        }

        void sleep(){
            cout << "This person is sleeping\n";
        }
};

class Car {
    public:
        string make;
        string model;
        int year;
        string color;

        void accelerate(){
            cout << "You step on the gas!\n";
        }

        void brake(){
            cout << "You step on the brakes!\n";
        }

        // Function to print all car information
        void pritnInfo(){
            cout << "Car Information:\n";
            cout << "Make: " << make << '\n';
            cout << "Model: " << model << '\n';
            cout << "Year: " << year << '\n';
            cout << "Color: " << color << '\n';
        }
};


int main(){

    Human human1;

    cout << human1.name << '\n';
    cout << human1.occupation << '\n';
    cout << human1.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    cout << '\n';

    Car car1;
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "silver";

    // Print car information using the printInfo() function
    car1.pritnInfo();

    return 0;
}
