#include <iostream>
#include <string>
#include <vector>

// Program 37: Struct overview
struct Task {
    std::string title;
    int estimate;
};

int main() {
    std::cout << "Program 37: Struct overview" << std::endl;
    std::vector<Task> tasks = {
        {"Wireframes", 3},
        {"Prototype", 5},
        {"Feedback", 2}
    };
    for (const auto& task : tasks) {
        std::cout << task.title << " -> " << task.estimate << " pts" << std::endl;
    }
    return 0;
}
