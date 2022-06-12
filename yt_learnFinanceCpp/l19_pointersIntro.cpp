#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int anInt = 0;
    float aFloat = 0.0;
    double aDouble = 0.0;

    cout << endl <<
    "Memory lego bricks, int: " << sizeof(anInt) << endl <<
    "Memory lego bricks, float: " << sizeof(aFloat) << endl <<
    "Memory lego bricks, double: " << sizeof(aDouble) << endl;


    cout.setf(ios::hex);
    cout.unsetf(ios::dec);

    cout << endl <<
    "&anint: " << &anInt << endl <<
    "&aFloat: " << &aFloat << endl <<
    "&aDouble: " << &aDouble << endl;

    //

    return 0;
}
