#include <iostream>

using namespace std;

double getTotal(double [], int);

int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int length = sizeof(prices)/sizeof(double);

    double total = getTotal(prices, length);
    cout << "$" << total;

    return 0;
}

double getTotal(double prices[], int length){
    double total = 0;

    for (int i = 0; i < length; i++) {
        total += prices[i];
    }

    return total;
}