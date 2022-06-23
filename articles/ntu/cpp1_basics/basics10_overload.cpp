/* Test Function Overloading (FunctionOverloading.cpp) */
#include <iostream>
using namespace std;

void fun(int, int, int);  // Version 1
void fun(double, int);          // Version 2
void fun(int, double);          // Version 3

int main() {
   fun(1, 2, 3);   // version 1
   fun(1.0, 2);    // version 2
   fun(1, 2.0);    // version 3
   fun(1.1, 2, 3); // version 1 - double 1.1 casted to int 1 (without warning)

   // fun(1, 2, 3, 4);
      // error: no matching function for call to 'fun(int, int, int, int)'
   // fun(1, 2);
      // error: call of overloaded 'fun(int, int)' is ambiguous
      // note: candidates are:
      //    void fun(double, int)
      //    void fun(int, double)
   // fun(1.0, 2.0);
      // error: call of overloaded 'fun(double, double)' is ambiguous
}

void fun(int n1, int n2, int n3) {  // version 1
   cout << "version 1" << endl;
}

void fun(double n1, int n2) { // version 2
   cout << "version 2" << endl;
}

void fun(int n1, double n2) { // version 3
   cout << "version 3" << endl;
}
