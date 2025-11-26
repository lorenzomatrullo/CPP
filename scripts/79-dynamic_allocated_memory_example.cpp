#include <iostream>
using namespace std;

int main(){

    char *pGrades = NULL;

    int size;
    cout << "How many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for (int i = 0; i < size; i++) {
        cout << pGrades[i] << " ";
    }


    // if we have to delete an array we'll add a set of "[]" after "delete" then our pointer
    delete[] pGrades;



    return 0;
}