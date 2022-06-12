#include <iostream>

using namespace std;

int& maxNum(int& firstN, int& secondN){
    if (firstN > secondN) {
        return firstN;
    }
    else {
        return secondN;
    }
}

int main(int argc, const char * argv[]) {

    int anInt = 42;

    cout << "anInt: " << anInt << endl;

    int& refAnInt = anInt;

    cout << "refAnInt: " << refAnInt << endl;

    anInt *= 3; // anInt = anInt* 3

    cout << "anInt: " << anInt << endl;
    cout << "refAnInt: " << refAnInt << endl;

    refAnInt += 10;

    cout << "anInt: " << anInt << endl;
    cout << "refAnInt: " << refAnInt << endl;

    // New section - use of references

    int firstNum = 42;
    int secondNum = 69;

    cout << "1stNum: " << firstNum << " , 2ndNum: " << secondNum << endl;

    maxNum(firstNum, secondNum) = 99;

    cout << "1stNum: " << firstNum << " , 2ndNum: " << secondNum << endl;

    return 0;
}
