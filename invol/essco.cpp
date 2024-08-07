#include <iostream>
#include <vector>

int main() {
    std::vector<int> touch_fds = {3, 4, 5, 6}; // Example file descriptors

    // Iterate over each element in touch_fds
    for (size_t i = 0; i < touch_fds.size(); i++) {
        std::cout << "Touch file descriptor " << i << ": " << touch_fds[i] << std::endl;
        // Perform other operations on touch_fds[i]
    }

    return 0;
}
