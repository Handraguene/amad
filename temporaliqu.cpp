#include <iostream>

int main() {
    std::ios::sync_with_stdio(false); // Disable synchronization between C and C++ standard streams
    std::cin.tie(0); // Untie cin from cout

    int a, b;
    std::cin >> a >> b;
    std::cout << "a + b = " << (a + b) << '\n';

    return 0;
}
