#include <iostream>
#include <limits> // Required for std::numeric_limits

using namespace std;

int searchArray(int [], int, int);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers)/sizeof(numbers[0]);

    int myNum;
    cout << "Enter the lement to search for: ";

    // Input validation
    if (!(cin >> myNum)) {
        cout << "You can only find numbers.";
        // Clearing the error state of cin
        cin.clear();
        // Discarding invalid input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1; // Exit the program
    }

    int index = searchArray(numbers, length, myNum);

    if (index != -1) {
        cout << myNum << " is at index " << index;
    } else {
        cout << myNum << " is not in the array";
    }


    return 0;
}

int searchArray(int array[], int length, int element){

    for (int i = 0; i < length; i++) {
        if (array[i] == element) {
            return i;
        }
    }

    return -1;      // something was not found
}