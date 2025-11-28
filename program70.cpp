#include <algorithm>
#include <array>
#include <iostream>

// Program 70: std::array with algorithms
int main() {
    std::cout << "Program 70: std::array with algorithms" << std::endl;
    std::array<int, 5> cycle = {5, 3, 4, 6, 2};
    std::sort(cycle.begin(), cycle.end());
    for (int value : cycle) {
        std::cout << value << ' ';
    }
    std::cout << std::endl;
    return 0;
}
