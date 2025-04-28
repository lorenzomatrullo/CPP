/*
    FRIEND: function that is not a member of a class but has access to the private and protected members of the class.
*/

#include <iostream>
using namespace std;


// Class declaration
class MyClass {
    private:
        int privateData;

    public:
        MyClass(int data) : privateData(data) {

        }

        // Declaration of friend function
        friend void printPrivateData(const MyClass &obj);
};

// Definition of the friend function
void printPrivateData(const MyClass &obj) {
    // Accessing private member of MyClass directly
    cout << "Private data: " << obj.privateData << endl;
}

int main() {
    
    MyClass obj(42);

    // Call the friend function to print private data
    printPrivateData(obj);

    return 0;
}

