#include <iostream>

using namespace std;

// foreach loop = loop that eases the traversal over an iterable data set

int main(){

    string students[] = {"Spongebob", "Patrick", "Squidward"};
    int grades[] = {65, 72, 81, 93};

    // "for every student in students lets display each student"
    for(string student : students){
        cout << student << '\n';
    }

    for(int grade : grades){
        cout << grade << '\n';
    }

    return 0;
}