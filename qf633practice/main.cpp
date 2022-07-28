#include <iostream>

int fun1(int a, int b) {
    return (a++) + (b++);
}

int fun2(int& a, int& b) {
    return (a++) + (b++);
}


int main() {
    int a = 3, b = 4;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << "\n";

    std::cout << "fun1(a,b) = " << fun1(a,b) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << "\n";


    std::cout << "fun2(a,b) = " << fun2(a,b) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl << "\n";


    return 0;
}
