#include <iostream>
using namespace std;

/*
    STACK = portion of memory for NON dynamically allocated things.
*/


class Simple {
    public:
        int x;
};


class Stack {
    public:
        Simple simple;
};


class Heap {
    public:
        Simple *simple;

        Heap(int set_x){
            simple = new Simple;    // Dynamic allocating memory space for a new Simple object
            simple -> x = set_x;
        }
};


int main(){

    /*
    Simple simpleA;
    simpleA.x = 4;
    
    Simple simpleB;
    simpleB.x = 0;

    simpleB = simpleA;

    cout << "simpleA.x = " << simpleA.x << endl;
    cout << "simpleB.x = " << simpleB.x << endl;

    simpleB.x = 20;

    cout << "simpleA.x = " << simpleA.x << endl;
    cout << "simpleB.x = " << simpleB.x << endl;
    */
   

    /*
    Stack stackA;
    stackA.simple.x = 4;

    Stack stackB;
    stackB.simple.x = 4;

    stackB = stackA;


    cout << "stackA.simple.x = " << stackA.simple.x << endl;
    cout << "stackB.simple.x = " << stackB.simple.x << endl;


    stackB.simple.x = 20;
    cout << "stackA.simple.x = " << stackA.simple.x << endl;
    cout << "stackB.simple.x = " << stackB.simple.x << endl;
    */


    Heap heapA(4);
    Heap heapB(0);

    heapB = heapA;      // by doing this you're giving to heapB the same memory address of heapA

    cout << "heapA.simple->x = " << heapA.simple->x << endl;
    cout << "heapB.simple->x = " << heapB.simple->x << endl;

    heapB.simple->x = 20;

    cout << "heapA.simple->x = " << heapA.simple->x << endl;
    cout << "heapB.simple->x = " << heapB.simple->x << endl;

    return 0;
}