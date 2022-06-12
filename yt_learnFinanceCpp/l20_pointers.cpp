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
        "&anInt: " << &anInt << endl <<
        "&aFloat: " << &aFloat << endl <<
        "&aDouble: " << &aDouble << endl;

    int* pInt = &anInt;
    float* pFloat = &aFloat;
    double* pDouble = &aDouble;

    cout << endl <<
        "anInt: " << anInt << endl <<
        "aFloat: " << aFloat << endl <<
        "aDouble: " << aDouble << endl;

    // cout << endl <<
    //     "Sizeof, pInt: " << sizeof(pInt) << endl <<
    //     "Sizeof, pFloat: " << sizeof(pFloat) << endl <<
    //     "Sizeof, pDouble: " << sizeof(pDouble) << endl;

    cout << endl <<
        "&pInt: " << &pInt << endl <<
        "&pFloat: " << &pFloat << endl <<
        "&pDouble: " << &pDouble << endl;

    return 0;
}
