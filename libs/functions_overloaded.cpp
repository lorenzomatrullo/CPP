#include <iostream>

using namespace std;

/*
    OVERLOADED FUNCTIONS = functions that can share the same name but with a different set of parameters
*/

void bakePizza();
void bakePizza(string);
void bakePizza(string, string);

int main(){

    bakePizza();
    bakePizza("margherita");
    bakePizza("salsiccia", "friarielli");

    return 0;
}

void bakePizza(){
    cout << "Here is your pizza!\n";
}

void bakePizza(string topping1){
    cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(string topping1, string topping2){
    cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}