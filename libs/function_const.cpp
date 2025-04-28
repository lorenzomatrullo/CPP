#include <iostream>

class MyClass {
    private:
        int value = 5;

    public:
        // Const member function that returns a constant integer
        int getValue() const {
            return value;
        }
};

int main() {
    const MyClass obj;
    std::cout << "Value: " << obj.getValue() << std::endl;
    return 0;
}