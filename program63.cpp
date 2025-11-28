#include <iostream>
#include <vector>
#include <string>

// Program 63: Looping through schedule
int main() {
    std::cout << "Program 63: Looping through schedule" << std::endl;
    std::vector<std::string> phases = {"Design", "Build", "Test", "Deploy"};
    for (size_t index = 0; index < phases.size(); ++index) {
        std::cout << "Phase " << index + 1 << " (" << phases[index]
                  << ") spans " << 5 + static_cast<int>(index) << " days" << std::endl;
    }
    return 0;
}
