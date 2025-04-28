#include <iostream>
using namespace std;

/*
    DESTRUCTOR = special method that is automatically called when an object goes out of scope OR is explicitly deleleted using "delete".

    Its primary purpose is to perform any necessary cleanup tasks associated with the object's resources.

    *Deallocating mamory
    *Closing files
    *Releasing other resources

    ~ (tilde) is used to declare a destructor
*/

class MyClass {
    private:
        int *data; // Pointer to dynamically allocated memory

    public:
        MyClass() {
            data = new int; // Allocate memory
            cout << "Data allocated!\n";
        }

        ~MyClass() {
            delete data; // Deallocate memory in the destructor
            cout << "Data deallocated!\n";
        }
};


int main(){


    return 0;
}