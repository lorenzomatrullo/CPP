#include <iostream>
using namespace std;


int binaryToDecimal(int binary) {
  int decimal = 0;
  int base = 1;

  while (binary > 0) {
    int lastDigit = binary % 10;
    decimal += lastDigit * base;
    binary /= 10;
    base *= 2;
  }

  return decimal;
}


int main() {
  int binaryNumber;

  cout << "Enter a binary number: ";
  cin >> binaryNumber;

  // Input validation (optional)
  if (binaryNumber < 0) {
    cout << "Invalid input: Binary number cannot be negative." << endl;
    return 1;
  }

  int decimalNumber = binaryToDecimal(binaryNumber);

  cout << binaryNumber << " in binary is equal to " << decimalNumber << " in decimal." << endl;

  return 0;
}
