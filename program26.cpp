#include <iostream>
#include <map>
#include <string>

// Program 26: std::map summary
int main() {
    std::cout << "Program 26: std::map summary" << std::endl;
    std::map<std::string, int> ownership = {
        {"Design", 1},
        {"Engineering", 3},
        {"QA", 2}
    };
    for (const auto& [team, owners] : ownership) {
        std::cout << team << ": " << owners << " owners" << std::endl;
    }
    return 0;
}
