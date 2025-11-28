#include <iostream>

// Program 17: Condition guard demo
int main() {
    std::cout << "Program 17: Condition guard demo" << std::endl;
    int openBugs = 5 + (17 % 2);
    const int threshold = 5;
    if (openBugs > threshold) {
        std::cout << "Status: Raise a bug bash." << std::endl;
    } else if (openBugs == threshold) {
        std::cout << "Status: Monitor closely." << std::endl;
    } else {
        std::cout << "Status: On track." << std::endl;
    }
    return 0;
}
