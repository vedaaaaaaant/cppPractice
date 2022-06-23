/*
 * Test Boolean function (BooleanfunctionTest.cpp).
 */
#include <iostream>
using namespace std;

// Function Prototype
bool isOdd(int);

int main() {
   cout << boolalpha;   // print bool as true or false
   cout << isOdd(5) << endl;  // true
   cout << isOdd(6) << endl;  // false
   cout << isOdd(-5) << endl; // false
}

bool isOdd(int number) {
   if (number % 2 == 1) {
      return true;
   } else {
      return false;
   }
}
