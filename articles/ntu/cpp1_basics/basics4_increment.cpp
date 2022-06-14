/* Test on increment (++) and decrement (--) Operator (TestIncDec.cpp) */
#include <iostream>
using namespace std;

int main() {
   int mark = 76;        // declare & assign
   cout << mark << endl; // 76

   mark++;               // increase by 1 (post-increment)
   cout << mark << endl; // 77

   ++mark;               // increase by 1 (pre-increment)
   cout << mark << endl; // 78

   mark = mark + 1;      // also increase by 1 (or mark += 1)
   cout << mark << endl; // 79

   mark--;               // decrease by 1 (post-decrement)
   cout << mark << endl; // 78

   --mark;               // decrease by 1 (pre-decrement)
   cout << mark << endl; // 77

   mark = mark - 1;      // also decrease by 1 (or mark -= 1)
   cout << mark << endl; // 76
   return 0;
}
