#include <iostream>
using namespace std;

/*
    TYPE CASTING = conversion a value of one data type to another

    Implicit = automatic
    Explicit = precede value with new data type (int)
*/

int main(){

    // double x = (int)3.14;
    int correct = 8;
    int questions = 10;
    double score = (correct/(double)questions) * 100;

    cout << score << "%";


    return 0;
}