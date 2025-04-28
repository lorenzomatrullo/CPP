#include <iostream>

using namespace std;

void sort(int [], int);

int main(){

    int array[] = {9, 1, 8, 2, 4, 7, 6, 5, 3};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for (int element : array) {
        cout << element << " ";
    }

    return 0;
}

void sort(int array[], int length){
    for (int i = 0; i < length - 1; i++){
        for(int j = 0; j < length - 1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}