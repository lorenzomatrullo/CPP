#include <iostream>
#include <fstream>
using namespace std;


/*
    ofstream (Output File Stream): Used for writing data to a file.
*/


int main(){

    ofstream outputFile;    // To write to a file

    // outFile.open("file.txt");                        // this will overwrites existing content
    outputFile.open("file.txt", ofstream::app);        // this will append the new content to the existing one
    
    if (outputFile.fail()) {
        cout << "Error opening file." << '\n';
        return 1;
    }


    double x = 4.5;
    int y = 10;
    string z = "abc";

    outputFile << "content" << '\n';
    outputFile << x << '\n';
    outputFile << y << '\n';
    outputFile << z << '\n';


    outputFile.close();

    return 0;
}