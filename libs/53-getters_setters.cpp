#include <iostream>
using namespace std;

/*
    Abstraction = hiding unnecessary data from outside a class
    getter = function that makes a private attribute READABLE
    setter = function that makes a private attribute WRITEABLE
*/

// public: allows to change a setting by anyone
// private: does not allow anyone to change the setting

class Stove{
    private:
        int temperature = 0;
    public:
    
        int getTemperature(){
            return temperature;
        }

        void setTemperature(int temperature){
            if (temperature < 0) {
                this -> temperature = 0;
            } else if (temperature >= 10) {
                this -> temperature = 10;
            } else {
                this -> temperature = temperature;
            }
        }
};


int main(){

    Stove stove;

    // stove.temperature = 1000000;
    stove.setTemperature(5);

    cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}