#include <iostream>
using namespace std;

/* stack
    variables       address     value
    a               12          5
    b               13          6
    ..              14
    ..              15
    ..              ..
    ..              ..
    ..              ..
    ..              ..
    a[0]            16          1
    a[1]            17          5
    a[2]            18          9
    ..              19
    heap
*/

/*
    DYNAMIC MEMORY = Memory that is allocated after the program is already compiled & running.
    1. Use the "new" operator to allocate memory in the heap rather than the stack.
    2. Useful when we don't know how much memory we will need.
    3. Makes our programs more flexible especially when accepting user input.
*/


int main(){

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout << "Address: " << pNum << '\n';
    cout << "Value: " << *pNum << '\n';

    // it's good practice to use "delete" if before we used the "new" operator and we are no longer using that memory.
    delete pNum;        // freeing up the memory at this address

    return 0;
}