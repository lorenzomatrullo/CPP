#include <iostream>
#include <stack>
using namespace std;

/*
    STACK =  is a data structure that allows you to store and manage a collection of elements in a Last-In-First-Out (LIFO) manner.

    *This means that the last element added to the stack is the first one to be removed.

    push()  ->  Add an element to the top of the stack.
    pop()   ->  Remove the element from the top of the stack.
    top()   ->  Access the element at the top of the stack.
    empty() ->  Check if the stack is empty.
    size()  ->  Get the number of elements in the stack.
    swap()  ->  Swaps the content of 2 stacks.
*/

// Class definition for Employee
class Employee {
    public:
        int days;

        // Constructor
        Employee(int days) {
            cout << "Constructor called with days = " << days << endl;
            this->days = days;
        }

        // Copy constructor
        Employee(const Employee &employee) {
            cout << "Copy constructor called with days = " << employee.days << endl;
            this->days = employee.days;
        }

        // Destructor
        ~Employee() {
            cout << "Destructor called with days = " << days << endl;
        }
};

int main() {
    // Create a stack of integers
    stack<int> numbers;

    // Print the initial size of the stack
    cout << "size: " << numbers.size() << endl;

    // Check if the stack is empty
    if (numbers.empty()) {
        cout << "Stack is empty" << endl;
    }

    // Push an element onto the stack
    numbers.push(8);
    cout << "size: " << numbers.size() << endl;

    // Check if the stack is not empty
    if (!numbers.empty()) {
        cout << "Stack is not empty" << endl;
    }

    // Print the top element of the stack
    cout << "top: " << numbers.top() << endl;

    // Push more elements onto the stack
    numbers.push(9);
    numbers.push(5);

    /*
        Stack now looks like this:
        5 - top
        9
        8 - bottom
    */

    // Print the current top element and size of the stack
    cout << endl;
    cout << "top: " << numbers.top() << endl;
    cout << "size: " << numbers.size() << endl;

    // Pop the top element and store it in a variable
    int popped_value = numbers.top();
    numbers.pop();

    // Print the new top element, size of the stack, and the popped value
    cout << endl;
    cout << "top: " << numbers.top() << endl;
    cout << "size: " << numbers.size() << endl;
    cout << "popped_value: " << popped_value << endl;

    // Create another stack and push an element onto it
    stack<int> other_stack;
    other_stack.push(4);
    cout << "other_stack size: " << other_stack.size() << endl;

    // Swap the contents of the two stacks
    other_stack.swap(numbers);

    // Print the sizes of both stacks after swapping
    cout << endl;
    cout << "other_stack size: " << other_stack.size() << endl;
    cout << "numbers size: " << numbers.size() << endl;

    // Create a stack of Employee objects
    cout << endl;
    stack<Employee> employee_stack;

    // Employee joe(10);
    // employee_stack.push(joe);

    // Use emplace to construct an Employee object directly in the stack
    employee_stack.emplace(20);

    // Employee top_employee = employee_stack.top();

    // Pop the top Employee object from the stack
    employee_stack.pop();

    return 0;
}