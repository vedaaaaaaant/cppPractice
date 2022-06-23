#include <iostream>
using namespace std;

// Function prototype
int sum(int array[], int size);    // Need to pass the array size too
void print(int array[], int size);

// Test Driver
int main() {
   int a1[] = {8, 4, 5, 3, 2};
   print(a1, 5);   // {8,4,5,3,2}
   cout << "sum is " << sum(a1, 5) << endl;  // sum is 22
}

// Function definition
// Return the sum of the given array
int sum(int array[], int size) {
   int sum = 0;
   for (int i = 0; i < size; ++i) {
      sum += array[i];
   }
   return sum;
}

// Print the contents of the given array
void print(int array[], int size) {
   cout << "{";
   for (int i = 0; i < size; ++i) {
      cout << array[i];
      if (i < size - 1) {
         cout << ",";
      }
   }
   cout << "}" << endl;
}
