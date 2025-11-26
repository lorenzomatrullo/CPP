#include <iostream>
using namespace std;

/*
    Null value = a special value that means something has no value.
    When a pointer is holding a null value, that pointer is not pointing at anything (Null pointer).

    nullptr = keyword represents a null pointer literal
    nullptrs are helpful when determining if an address was successfulyl assigned to a pointer
*/

int main(){

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr) {
        cout << "address was not sasigned!\n";
    } else {
        cout << "address was assigned!\n";
        cout << *pointer;
    }

    return 0;
}