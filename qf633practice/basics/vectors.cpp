#include <vector>
#include <iostream>


int main() {
    std::vector<double> foo(5);

    std::cout << foo.size() << std::endl;

    foo[0] = 1;
    foo[2] = 2;
    std::cout << foo[0] - foo[2] << std::endl;

    return 0;
}
