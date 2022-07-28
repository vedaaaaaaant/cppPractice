#include <algorithm>
#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v) {
    for (auto vv : v) {
        std::cout << vv << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> v{0, 1, 2, 3, 4, 5};
    print_vector(v);

    //left rotate
    // std::rotate(v.begin(), v.begin() + 1, v.end());
    // print_vector(v);

    //right rotate
    std::rotate(v.rbegin(), v.rbegin() + 1, v.rend());
    print_vector(v);

    return 0;

}
