/* Test Arithmetic Overflow/Underflow (TestOverflow.cpp) */
#include <iostream>
using namespace std;

int main() {
   // Range of int is [-2147483648, 2147483647]
   int i1 = 2147483647;      // max int
   cout << i1 + 1 << endl;   // -2147483648 (overflow)
   cout << i1 + 2 << endl;   // -2147483647
   cout << i1 * i1 << endl;  // 1

   int i2 = -2147483648;     // min int
   cout << i2 - 1 << endl;   // 2147483647 (underflow)
   cout << i2 - 2 << endl;   // 2147483646
   cout << i2 * i2 << endl;  // 0
   return 0;
}
