#include <iostream>

// Program 64: Recursive helper
int factorial(int value) {
    return (value <= 1) ? 1 : value * factorial(value - 1);
}

int main() {
    std::cout << "Program 64: Recursive helper" << std::endl;
    int nValue = 7;
    std::cout << nValue << "! = " << factorial(nValue) << std::endl;
    return 0;
}
