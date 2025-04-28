#include <iostream>
using namespace std;

/*
    INHERITANCE = a class recieve attributes and methods from another class

    Children classes inherit from a Parent class
    Helps to reuse similar code found within multiple classes
*/


class Animal{
    public:
        bool alive = true;

        void eat(){
            cout << "This animal is eating\n";
        }
};


class Dog : public Animal{
    public:

        void bark(){
            cout << "The dog goes woof!\n";
        }
};


class Cat : public Animal{
    public:
        
        void meow(){
            cout << "The cat goes meow!\n";
        }
};


int main(){

    Dog dog;
    Cat cat;

    cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    cout << '\n';

    cout << cat.alive << '\n';
    cat.eat();
    cat.meow();


    return 0;
}