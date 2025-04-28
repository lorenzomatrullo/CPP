#include <iostream>
#include <fstream>
using namespace std;


/*
    ifstream (Input File Stream): Used for reading data from a file.
*/


int main() {

    ifstream inputFile;

    inputFile.open("file.txt");


    if (inputFile.fail()) {
        cout << "Error opening the file.";
        return 1;
    }


    string line;
    while (getline(inputFile, line)) {
        // Process each line as needed
        cout << line << endl;  // Print each line to the console
    }


    inputFile.close();

  return 0;
}