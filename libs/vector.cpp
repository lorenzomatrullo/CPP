#include <iostream>
#include <vector>
using namespace std;

/*
    VECTORS = vectors are dynamic arrays that can automatically resize themselves at runtime.
*/

int main(){

    vector<int> v1 = {1, 2, 3, 4, 5};

    cout << "Element N1: " << v1[0] << '\n';
    cout << "Element N2: " << v1[1] << '\n';
    cout << "Element N3: " << v1[2] << '\n';

    cout << '\n';

    cout << "1st element: " << v1.front() << '\n';              // displays 1st element of the array
    cout << "last element: " << v1.back() << '\n';              // displays last element of the array
    cout << "vector's size: " << v1.size() << '\n';             // displays the number of elements in the vector
    cout << "vector's capacity: " << v1.capacity() << '\n';     // Returns the maximum number of elements the vector can currently hold without reallocation.

    v1.push_back(9);                                            // Appends an element to the end of the vector.
    v1.pop_back();                                              // Removes the last element from the vector.

    v1.shrink_to_fit();                                         // Shrinks the vector's capacity to match its current number of elements (size).

    v1.insert(v1.begin(), 6);                                   // Inserts an element at a chosen position that starts from begin.
    v1.insert(v1.begin() + 1, 7);
    cout << v1[0] << '\n';
    cout << v1[1] << '\n';

    v1.erase(v1.begin());                                       // Removes the 1st element of the array.
    cout << v1[0] << '\n';

    v1.erase(v1.begin(), v1.begin() + 2);                       // Removes a range of elements of the array.
    cout << v1[0] << '\n';

    return 0;
}