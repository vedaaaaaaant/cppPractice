#include <iostream>
using namespace std;

int factorial (int n) {
    return n<1 ? 1 : n*factorial(n - 1);
}

int main() {
    int v;
    cout << "Please enter a number: " << endl;
    cin >> v;

    cout << "The factorial of " << v << " is " << factorial(v) << endl;

}
