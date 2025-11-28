#include <iostream>
#include <stack>
#include <string>

// Program 58: std::stack review
int main() {
    std::cout << "Program 58: std::stack review" << std::endl;
    std::stack<std::string> review;
    review.push("lint");
    review.push("tests");
    review.push("deploy");
    while (!review.empty()) {
        std::cout << "Step: " << review.top() << std::endl;
        review.pop();
    }
    return 0;
}
