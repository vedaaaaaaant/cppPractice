#include<iostream>

class Box {
public:
    double length;
    double breadth;
    double height;
};

struct Box2 {
protected:
    double length;
    double breadth;
    double height;
};

int main()
{
    Box b;
    std::cout << "box volume: " << b.length * b.breadth * b.height << std::endl;

    Box2 b2;
    std::cout << "box volume: " << b2.length * b2.breadth * b2.height << std::endl;
}
