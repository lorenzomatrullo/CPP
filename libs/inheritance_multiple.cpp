#include <iostream>
using namespace std;


class CommonBaseClass {
    public:
        int common_value;

        CommonBaseClass() : common_value(-99){

        }

        CommonBaseClass(int common_value) {
            this -> common_value = common_value;
        }
};


class BaseClass1 : virtual public CommonBaseClass {
    public:
        int value;

        BaseClass1() : CommonBaseClass(100) {

        }

        void function1(){
            cout << "Function1 BaseClass1" << endl;
        }
};


class BaseClass2 : virtual public CommonBaseClass {
    public:
        int value;

        BaseClass2() : CommonBaseClass(200) {
            
        }

        void function1(){
            cout << "Function1 BaseClass2" << endl;
        }
};


class DerivedClass : public BaseClass1, public BaseClass2 {
    public:
        void function1(){
            // cout << "Function1 DerivedClass" << endl;
            BaseClass1::function1();
        }

        DerivedClass() : CommonBaseClass(999) {
            
        }
};


int main(){
    DerivedClass derived;
    
    // Accessing the common_value directly from DerivedClass
    // derived.common_value = 10;


    // Resolving ambiguities for function1 calls
    derived.BaseClass1::function1();
    derived.BaseClass2::function1();
    derived.function1();                // Calls the DerivedClass version

    // Assigning values to the value member in both base classes
    derived.BaseClass1::value = 10;
    derived.BaseClass2::value = 20;



    // Printing values to verify
    cout << endl;
    cout << "DerivedClass common_value: " << derived.common_value << endl;
    cout << "BaseClass1 value: " << derived.BaseClass1::value << endl;
    cout << "BaseClass2 value: " << derived.BaseClass2::value << endl;

    return 0;
}