#include <map>
#include <iostream>

int main() {
    std::map<double, int> quantities{
    {99.20, 10},
    {99.21, 11},
    {99.22, 12},
    {99.23, 13}
};

    double base_price = 99.2;
    double tick_size = 0.01;
    for (auto i = 0; i < 4; ++i) {
        auto price = base_price + tick_size * i;
        auto itr = quantities.find(price);
        if (auto itr = quantities.find(price); itr != quantities.end()) {
            std::cout << "price: " << price << ", qty: " << itr ->second << std::endl;
        } else {
            std::cout << "price: " << price << ", not found!!!" << std::endl;
        }
    }
    return 0;


}
