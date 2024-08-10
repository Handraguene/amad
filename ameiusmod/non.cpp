#include <iostream>

struct Data {
    int size;
};

int main() {
    Data d;
    d.size = 5;

    int h = d.size << 1; // Perform bitwise left shift

    std::cout << "Original size: " << d.size << std::endl;
    std::cout << "Shifted size: " << h << std::endl; // Should output 10

    return 0;
}
