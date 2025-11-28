#include <iostream>
#include <set>
#include <string>

// Program 57: std::set deduplication
int main() {
    std::cout << "Program 57: std::set deduplication" << std::endl;
    std::multiset<std::string> inputs = {"api", "api", "cli", "ui"};
    std::set<std::string> unique(inputs.begin(), inputs.end());
    for (const auto& item : unique) {
        std::cout << "Unique channel: " << item << std::endl;
    }
    return 0;
}
