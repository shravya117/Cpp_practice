#include <iostream>

// Program 62: Condition guard demo
int main() {
    std::cout << "Program 62: Condition guard demo" << std::endl;
    int openBugs = 5 + (62 % 2);
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
