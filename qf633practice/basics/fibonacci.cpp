#include <iostream>
using namespace std;


int fibonacci (int n) {
    if (n == 1 || n == 0)
        return (n);
    else if (n > 1)
        return fibonacci(n-1) + fibonacci(n-2);
    else
        throw "does not support negative n";
}

int main() {
    int v;
    cout << "Please enter a number: " << endl;
    cin >> v;

    cout << "The fibonacci of " << v << " is " << fibonacci(v) << endl;

}
