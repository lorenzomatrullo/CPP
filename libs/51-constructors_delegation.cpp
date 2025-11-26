#include <iostream>
using namespace std;

/*
    Constructor Delegation = allows one constructor to use another constructor within the same class

    *Reduce the amount of duplicated code in our class
*/


class Rectangle {
    public:
        int length;
        int width;
        int area;
        string color;

        Rectangle(int length, int width){
            this -> length = length;
            this -> width = width;
            area = length * width;
        }

        /*
        Rectangle(int length, int width, string color){
            this -> length = length;
            this -> width = width;
            area = length * width;
            this -> color = color;
        }
        */

        Rectangle(int length, int width, string color) : Rectangle(length, width) {
            this -> color = color;
        }


        void print(){
            cout << "length: " << length << endl; 
            cout << "width: " << width << endl; 
            cout << "area: " << area << endl; 
            cout << "color: " << color << endl; 
        }
};


int main(){

    Rectangle rectangle1(5, 10, "red");

    rectangle1.print();


    return 0;
}